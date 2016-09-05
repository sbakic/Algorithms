#include <bits/stdc++.h>

using namespace std;

int main() {
  char s[1001][1001];
  int n, m, x, y, a[2][1001] = {}, dp[2][1001] = {};
  scanf("%d %d %d %d", &n, &m, &x, &y);
  for (int i = 0; i < n; i++) {
    scanf("%s", s[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] == '.') a[0][j + 1]++;
      else a[1][j + 1]++;
    }
  }
  for (int i = 1; i <= m; i++) {
    a[0][i] += a[0][i - 1];
    a[1][i] += a[1][i - 1];
    dp[0][i] = dp[1][i] = 1e9;
  }
  for(int i = 0; i < m; i++){
    for(int j = x; j <= y; j++){
      dp[0][i + j] = min(dp[0][i + j], dp[1][i] + a[0][i + j] - a[0][i]);
      dp[1][i + j] = min(dp[1][i + j], dp[0][i] + a[1][i + j] - a[1][i]);
    }
  }
  printf("%d", min(dp[0][m], dp[1][m]));
  return 0;
}
