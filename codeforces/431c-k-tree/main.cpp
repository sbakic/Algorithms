#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, d, dp[101][2] = {}, mod = 1e9 + 7;;
  cin >> n >> k >> d;
  dp[0][0] = 1;
  dp[0][1] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= k; j++) {
      if (i >= j) {
        if (j < d) {
          dp[i][0] = (dp[i][0] + dp[i - j][0]) % mod;
          dp[i][1] = (dp[i][1] + dp[i - j][1]) % mod;
        }
        else {
          dp[i][1] = (dp[i][1] + dp[i - j][0]) % mod;
          dp[i][1] = (dp[i][1] + dp[i - j][1]) % mod;
        }
      }
    }
  }
  cout << dp[n][1];
  return 0;
}
