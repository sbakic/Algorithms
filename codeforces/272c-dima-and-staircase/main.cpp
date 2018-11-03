#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[100000];
  long long ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &m);
  while (m--) {
    int x, y;
    scanf("%d %d", &x, &y);
    ans = max(ans, a[x - 1] * 1LL);
    printf("%I64d\n", ans);
    ans += y;
  }
  return 0;
}
