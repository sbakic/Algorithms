#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, dp[150001] = {}, ans = 1e9, index = -1;
  scanf("%d %d", &n, &k);
  for (int i = 1; i <= n; i++) {
    int x;
    scanf("%d", &x);
    dp[i] = dp[i - 1] + x;
  }
  for (int i = 0; i <= n - k; i++) {
    int curr = dp[i + k] - dp[i];
    if (curr < ans) {
      ans = curr;
      index = i;
    }
  }
  printf("%d", index + 1);
  return 0;
}
