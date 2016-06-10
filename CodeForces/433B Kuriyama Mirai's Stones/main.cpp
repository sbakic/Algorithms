#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[100001];
  long long dp[100001] = {}, dp_sort[100001] = {};
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a[i]);
    dp[i] = dp[i - 1] + a[i];
  }
  sort(a, a + n + 1);
  for (int i = 1; i <= n; i++) {
     dp_sort[i] = dp_sort[i - 1] + a[i];
  }
  scanf("%d", &m);
  while (m--) {
    int x, l, r;
    scanf("%d %d %d", &x, &l, &r);
    if (x == 1) {
      printf("%I64d\n", dp[r] - dp[l - 1]);
    }
    if (x == 2) {
      printf("%I64d\n", dp_sort[r] - dp_sort[l - 1]);
    }
  }
  return 0;
}
