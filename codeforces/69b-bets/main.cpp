#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, l[100], r[100], t[100], c[100], ans = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    scanf("%d %d %d %d", &l[i], &r[i], &t[i], &c[i]);
  }
  for (int i = 1; i <= n; i++) {
    int minT = 10e5, profit = 0;
    for (int j = 0; j < m; j++) {
      if (l[j] > i || r[j] < i) continue;
      if (t[j] < minT) {
        minT = t[j];
        profit = c[j];
      }
    }
    ans += profit;
  }
  printf("%d", ans);
  return 0;
}
