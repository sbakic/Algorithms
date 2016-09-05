#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, ans = 0;
    cin >> n >> k;
    for (int i = 1; i < n; i++) {
      for (int j = i + 1; j <= n; j++) {
        if ((i & j) < k) ans = max(ans, i & j);
      }
    }
    cout << ans << '\n';
  }
  return 0;
}
