#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[50000][5] = {};
  scanf("%d %d", &m, &n);
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 1; i < m; i++) {
    a[i][0] += a[i - 1][0];
  }
  for (int i = 1; i < n; i++) {
    a[0][i] += a[0][i - 1];
  }
  for (int i = 0; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (i == 0) continue;
      a[i][j] += max(a[i][j - 1], a[i - 1][j]);
    }
    printf("%d ", a[i][n - 1]);
  }
  return 0;
}
