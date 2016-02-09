#include <stdio.h>

int main() {
  int n, a[8] = {0, 1};
  scanf("%d", &n);
  for (int i = 2; i < 8; i++) {
    a[i] = 34 * a[i - 1] - a[i - 2] + 2;
  }
  for (int i = 2; i < 8; i++) {
    if (n > a[i]) printf("%d ", a[i]);
  }
  return 0;
}
