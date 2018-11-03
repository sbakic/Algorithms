#include <stdio.h>

int main() {
  int n, k, a[2000], count = 0;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (5 - a[i] >= k) count++;
  }
  printf("%d", count / 3);
  return 0;
}
