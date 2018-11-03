#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n == 1) printf("1\n1");
  if (n == 2) printf("1\n2");
  if (n == 3) printf("2\n1 3");
  if (n > 3) {
    printf("%d\n", n);
    for (int i = 2; i <= n; i += 2) {
      printf("%d ", i);
    }
    for (int i = 1; i <= n; i += 2) {
      printf("%d ", i);
    }
  }
  return 0;
}
