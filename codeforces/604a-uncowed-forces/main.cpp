#include <iostream>

using namespace std;

int main() {
  int m[5], w[5], hs, hu, x[5] = {500, 1000, 1500, 2000, 2500};
  double ans = 0;
  for (int i = 0; i < 5; i++) {
    cin >> m[i];
  }
  for (int i = 0; i < 5; i++) {
    cin >> w[i];
  }
  cin >> hs >> hu;
  for (int i = 0; i < 5; i++) {
    ans += max(0.3 * x[i], (1 - m[i] / 250.) * x[i] - 50 * w[i]);
  }
  cout << ans + hs * 100 - hu * 50;
  return 0;
}
