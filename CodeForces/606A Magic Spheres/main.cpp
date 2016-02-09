#include <iostream>

using namespace std;

int main() {
  int a, b, c, x, y, z, ans = 0;
  cin >> a >> b >> c >> x >> y >> z;
  ans += (a > x) ? (a - x) / 2 : a - x;
  ans += (b > y) ? (b - y) / 2 : b - y;
  ans += (c > z) ? (c - z) / 2 : c - z;
  if (ans >= 0) cout << "Yes";
  else cout << "No";
  return 0;
}
