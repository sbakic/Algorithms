#include <stdio.h>

int main() {
  int y, k, n;
  scanf("%d %d %d", &y, &k, &n);
  if (y == n || (y / k + 1) * k > n) {
    printf("-1");
    return 0;
  }
  for (int i = (y / k + 1) * k - y; i + y <= n; i += k) {
    printf("%d ", i);
  }
  return 0;
}
