#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100], vb, vs, x, y, ans, diff;
  double curr, ti = 1e12;
  cin >> n >> vb >> vs;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> x >> y;
  for (int i = 1; i < n; i++) {
    double bi = (double)a[i] / vb, si = sqrt((long long)(x - a[i]) * (x - a[i]) + (long long)(y * y)) / vs;
    curr = bi + si;
    if (fabs(curr - ti) > 1e-9 && curr < ti) {
      ti = curr;
      ans = i;
      diff = (long long)(x - a[i]) * (x - a[i]) + (long long)(y * y);
    }
    else if (fabs(curr - ti) < 1e-9 && diff > (long long)(x - a[i]) * (x - a[i]) + (long long)(y * y)) {
      ans = i;
      diff = (long long)(x - a[i]) * (x - a[i]) + (long long)(y * y);
    }
  }
  cout << ans + 1;
  return 0;
}
