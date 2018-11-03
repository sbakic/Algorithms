#include <stdio.h>

int main() {
  int n, m;
  char c[101][101];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (c[i][j] != '-') {
        if (i % 2 == 0 && j % 2 == 0) c[i][j] = 'B';
        if (i % 2 == 0 && j % 2 == 1) c[i][j] = 'W';
        if (i % 2 == 1 && j % 2 == 0) c[i][j] = 'W';
        if (i % 2 == 1 && j % 2 == 1) c[i][j] = 'B';
      }
      printf("%c", c[i][j]);
    }
    printf("\n");
  }
  return 0;
}
