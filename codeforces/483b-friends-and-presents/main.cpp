#include <iostream>

using namespace std;

int main() {
  int cnt1, cnt2, x, y;
  cin >> cnt1 >> cnt2 >> x >> y;
  int l = 1, r = 2000000000;
  while (l < r) {
    int m = (r - l) / 2 + l;
    if (m - m / x >= cnt1 && m - m / y >= cnt2 && m - m / (x * y) >= cnt1 + cnt2) {
      r = m;
    }
    else {
      l = m + 1;
    }
  }
  cout << r;
  return 0;
}
