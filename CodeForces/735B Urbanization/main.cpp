#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, n1, n2, a[100000], x, y;
  double ans = 0;
  cin >> n >> n1 >> n2;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  x = min(n1, n2);
  y = max(n1, n2);
  sort(a, a + n, greater<int>());
  for (int i = 0; i < x; i++) {
    ans += a[i] * 1. / x;
  }
  for (int i = x; i < x + y; i++) {
    ans += a[i] * 1. / y;
  }
  cout << fixed << setprecision(6) << ans;
  return 0;
}
