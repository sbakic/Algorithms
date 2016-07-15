#include <bits/stdc++.h>

using namespace std;

int main() {
  bool a[100001] = {};
  int k, l, m, n, d, ans = 0;
  cin >> k >> l >> m >> n >> d;
  for (int i = 0; i <= d; i++) {
    if (i * k <= d) a[i * k] = true;
    if (i * l <= d) a[i * l] = true;
    if (i * m <= d) a[i * m] = true;
    if (i * n <= d)  a[i * n] = true;
  }
  for (int i = 1; i <= d; i++) {
    if (a[i]) ans++;
  }
  cout << ans;
  return 0;
}
