#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, k, dp[100001], N = 100001, mod = 1e9 + 7;
  cin >> t >> k;
  for (int i = 0; i < N; i++) {
    if (i < k) dp[i] = 1;
    else dp[i] = (dp[i - 1] + dp[i - k]) % mod;
  }
  for (int i = 1; i < N; i++) {
    dp[i] = (dp[i] + dp[i - 1]) % mod;
  }
  while (t--) {
    int a, b;
    cin >> a >> b;
    cout << (dp[b] - dp[a - 1] + mod) % mod << '\n';
  }
  return 0;
}
