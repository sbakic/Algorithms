#include <iostream>

using namespace std;

int main() {
  int n, a, even = 0, odd = 0, evenI, oddI;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a % 2 == 0) {
      even++;
      evenI = i + 1;
    }
    else {
      oddI = i + 1;
      odd++;
    }
  }
  odd == 1 ? cout << oddI : cout << evenI;
  return 0;
}
