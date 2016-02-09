#include <stdio.h>

int main() {
  int n, gift, a[100];;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &gift);
    a[gift - 1] = i + 1;
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
