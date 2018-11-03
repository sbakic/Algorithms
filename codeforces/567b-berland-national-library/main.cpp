#include <iostream>

using namespace std;

 bool a[1000001];

int main() {
  int n, count = 0, current = 0;
  cin >> n;
  while (n--) {
    char c;
    int r;
    cin >> c >> r;
    if (c == '+') {
      if (current < count) current++;
      else if (current == count) {
        current++;
        count++;
      }
      a[r] = true;
    }
    else {
      if (a[r]) current--;
      else count++;
      a[r] = false;
    }
  }
  cout << count;
  return 0;
}
