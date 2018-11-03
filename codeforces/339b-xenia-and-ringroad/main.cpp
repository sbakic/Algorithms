#include <stdio.h>

int main() {
  int n, m, a[100001];
  long long count = 0;
  a[0] = 1;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= m; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 1; i <= m; i++) {
    if (a[i] >= a[i - 1]) count += (long long) a[i] - a[i - 1];
    else count += (long long) n - a[i - 1] + a[i];
  }
  printf("%I64d", count);
  return 0;
}
