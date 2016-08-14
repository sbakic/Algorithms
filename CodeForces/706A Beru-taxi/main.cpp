#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, n, x[1000], y[1000], v[1000];
  double ans = 1e9;
  cin >> a >> b >> n;
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> v[i];
  }
  for (int i = 0; i < n; i++) {
    double diff = sqrt((a - x[i]) * (a - x[i]) + (b - y[i]) * (b - y[i]));
    double curr = diff / v[i];
    ans = min(ans, curr);
  }
  cout << setprecision(10) << fixed << ans;
  return 0;
}
