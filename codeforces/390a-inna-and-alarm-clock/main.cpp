#include <stdio.h>

int a[101][101];

int main() {
  int n, vertical  = 0, horizontal = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x, y;
    scanf("%d %d", &x, &y);
    a[x][y] = 1;
  }
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      if (a[i][j] == 1) {
        vertical++;
        break;
      }
    }
  }
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      if (a[j][i] == 1) {
        horizontal++;
        break;
      }
    }
  }
  printf("%d", (vertical <= horizontal) ? vertical : horizontal);
  return 0;
}
