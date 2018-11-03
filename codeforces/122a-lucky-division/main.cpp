#include <iostream>

using namespace std;

int a[15], index = 0;

void make(int number) {
  if (number > 1000) return;
  a[index++] = number;
  make(number * 10 + 4);
  make(number * 10 + 7);
}

int main() {
  make(0);
  int n, t;
  cin >> n;
  t = n;
  bool lucky = true;
  while (t) {
    if (t % 10 != 4 && t % 10 != 7) {
      lucky = false;
      break;
    }
    t /= 10;
  }
  if (lucky) cout << "YES";
  else {
    for (int i = 1; i < 15; i++) {
      if (n % a[i] == 0) {
        cout << "YES";
        return 0;
      }
    }
    cout << "NO";
  }
  return 0;
}
