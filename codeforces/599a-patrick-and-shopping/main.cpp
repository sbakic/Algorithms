#include <iostream>

using namespace std;

int main() {
  int d1, d2, d3;
  cin >> d1 >> d2 >> d3;
  if (d1 + d2 < d3) cout << 2 * d1 + 2 * d2;
  else if (d1 + d3 < d2) cout << 2 * d1 + 2 * d3;
  else if (d2 + d3 < d1) cout << 2 * d2 + 2 * d3;
  else cout << d1 + d2 + d3;
  return 0;
}
