#include <stdio.h>

int main() {
  int n, m, count = 0;
  char c[10][10];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (c[i][j] == 'S') continue;
      bool found = false;
      for (int k = 0; k < n; k++) {
        if (c[k][j] == 'S') {
          found = true;
          break;
        }
      }
      if (!found) for (int k = 0; k < n; k++) c[k][j] = 'x';
      found = false;
      for (int k = 0; k < m; k++) {
        if (c[i][k] == 'S') {
          found = true;
          break;
        }
      }
      if (!found) for (int k = 0; k < m; k++) c[i][k] = 'x';
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (c[i][j] == 'x') count++;
    }
  }
  printf("%d", count);
  return 0;
}
