#include <stdio.h>

int main() {
  int n;
  char c[101][101];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int currentO = 0;
      if (c[i][j + 1] == 'o') currentO++;
      if (c[i - 1][j] == 'o') currentO++;
      if (c[i][j - 1] == 'o') currentO++;
      if (c[i + 1][j] == 'o') currentO++;
      if (currentO % 2 == 1) {
        printf("NO");
        return 0;
      }
    }
  }
  printf("YES");
  return 0;
}
