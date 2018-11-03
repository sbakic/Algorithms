#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, count[100001] = {};
  long long dp[100001];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    count[x]++;
  }
  dp[0] = 0;
  dp[1] = count[1];
  for (int i = 2; i < 100001; i++) {
    dp[i] = max(dp[i - 1], dp[i - 2] + (long long) i * count[i]);
  }
  printf("%I64d", dp[100000]);
  return 0;
}
