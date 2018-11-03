#include <stdio.h>

int main() {
  int n;
  char c[300][300];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", c[i]);
  }
  char diagonals = c[0][0];
  char nonDiagonals = c[0][1];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if ((i == j || i == n - 1 - j) && c[i][j] == diagonals && c[i][j] != nonDiagonals) continue;
      else if (i != j && i != n - 1 - j && c[i][j] != diagonals && c[i][j] == nonDiagonals) continue;
      else {
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  return 0;
}
