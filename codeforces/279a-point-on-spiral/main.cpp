#include <iostream>

using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  if (x >= y && x + y > 1) cout << 4 * x - 3;
  else if (x < y && y >= -x) cout << 4 * y - 2;
  else if (y < -x && y >= x) cout << -4 * x - 1;
  else cout << -4 * y;
  return 0;
}
