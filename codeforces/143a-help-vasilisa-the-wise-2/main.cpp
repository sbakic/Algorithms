#include <stdio.h>

int main() {
  int r1, r2, c1, c2, d1, d2;
  scanf("%d %d %d %d %d %d", &r1, &r2, &c1, &c2, &d1, &d2);
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      for (int k = 1; k <= 9; k++) {
        for (int l = 1; l <= 9; l++) {
          if (r1 == i + j && r2 == k + l && d1 == i + l && d2 == j + k && c1 == i + k && c2 == j + l && i != j && i != k && i != l && j != k && j != l && k != l) {
            printf("%d %d\n%d %d", i, j, k, l);
            return 0;
          }
        }
      }
    }
  }
  printf("-1");
  return 0;
}
