#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

int main() {
  int n, l, a[1000];
  double radius = 0;
  cin >> n >> l;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < n - 1; i++) {
    radius = max(radius, (a[i + 1] - a[i]) / 2.);
  }
  radius = max(radius, max(a[0] - 0 * 1., l - a[n - 1] * 1.));
  cout << fixed << setprecision(10) << radius;
  return 0;
}
