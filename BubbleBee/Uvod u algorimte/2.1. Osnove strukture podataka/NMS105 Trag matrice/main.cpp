#include <stdio.h>

int a[1000][1000];

int main() {
  int n, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
      if (i == j) count += a[i][j];
    }
  }
  printf("%d", count);
  return 0;
}
