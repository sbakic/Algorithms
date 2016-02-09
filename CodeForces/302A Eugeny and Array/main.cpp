#include <stdio.h>

int main() {
  int n, m, a[200000], ones = 0, zeros = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    a[i] == 1 ? ones++ : zeros++;
  }
  while (m--) {
    int l, r;
    scanf("%d %d", &l, &r);
    if ((r - l + 1) % 2 == 0) {
      if (2 * ones >= (r - l + 1) && 2 * zeros >= (r - l + 1)) printf("1\n");
      else printf("0\n");
    }
    else printf("0\n");
  }
  return 0;
}
