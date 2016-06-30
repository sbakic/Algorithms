#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[5] = {};
  long long ans = 0;
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    a[i % 5]++;
  }
  for (int i = 1; i <= n; i++) {
    ans += a[(5 - i % 5) == 5 ? 0 : 5 - i % 5];
  }
  cout << ans;
  return 0;
}
