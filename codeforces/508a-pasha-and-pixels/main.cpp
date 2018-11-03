#include <stdio.h>

bool a[1001][1001];

int main() {
  int n, m, k, x, y, count = 0;
  scanf("%d %d %d", &n, &m, &k);
  while (k--) {
    scanf("%d %d", &x, &y);
    a[x][y] = true;
    count++;
    if (a[x - 1][y - 1] == true && a[x - 1][y] == true && a[x][y - 1] == true ||
        a[x - 1][y] == true && a[x - 1][y + 1] == true && a[x][y + 1] == true ||
        a[x][y - 1] == true && a[x + 1][y - 1] == true && a[x + 1][y] == true ||
        a[x][y + 1] == true && a[x + 1][y] == true && a[x + 1][y + 1] == true) {
      printf("%d", count);
      return 0;
    }
  }
  printf("0");
  return 0;
}
