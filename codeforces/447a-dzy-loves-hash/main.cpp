#include <stdio.h>

int main() {
  int p, n, x, a[300];
  scanf("%d %d", &p, &n);
  for (int i = 0; i < n; i++) {
    a[i] = -1;
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    for (int j = 0; j <=i; j++) {
      if (a[j] == x % p) {
        printf("%d", i + 1);
        return 0;
      }
    }
    a[i] = x % p;
  }
  printf("-1");
  return 0;
}
