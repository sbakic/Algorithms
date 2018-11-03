#include <stdio.h>

int main() {
  int n, m, count = 0;
  char c[51][51];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int f = 0, a = 0, C = 0, e = 0;
      if (c[i][j] == 'f' || c[i][j + 1] == 'f' || c[i + 1][j] == 'f' || c[i + 1][j + 1] == 'f') f++;
      if (c[i][j] == 'a' || c[i][j + 1] == 'a' || c[i + 1][j] == 'a' || c[i + 1][j + 1] == 'a') a++;
      if (c[i][j] == 'c' || c[i][j + 1] == 'c' || c[i + 1][j] == 'c' || c[i + 1][j + 1] == 'c') C++;
      if (c[i][j] == 'e' || c[i][j + 1] == 'e' || c[i + 1][j] == 'e' || c[i + 1][j + 1] == 'e') e++;
      if (f + a + C + e == 4) count++;
    }
  }
  printf("%d", count);
  return 0;
}
