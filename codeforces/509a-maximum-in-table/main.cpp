#include <stdio.h>

int main() {
  int n, a[10][10], sum;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    a[0][i] = 1;
  }
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n; j++) {
      sum = 0;
      for (int z = 0; z <= j; z++) {
        sum += a[i - 1][z];
      }
      a[i][j] = sum;
    }
  }
  printf("%d", a[n - 1][n - 1]);
  return 0;
}
