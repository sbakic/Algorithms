#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int y, b, r;
  cin >> y >> b >> r;
  while (y) {
    if (b >= y + 1 && r >= y + 2) {
      cout << 3 * y + 3;
      break;
    }
    y--;
  }
  return 0;
}
