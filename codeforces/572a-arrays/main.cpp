#include <stdio.h>

int main() {
  int n, m, k, l, a[100000], b[100000];
  scanf("%d %d %d %d", &n, &m, &k, &l);
  for (int i = 0 ; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < m; i++) {
    scanf("%d", &b[i]);
  }
  if (a[k - 1] < b[m - l]) printf("YES");
  else printf("NO");
  return 0;
}
