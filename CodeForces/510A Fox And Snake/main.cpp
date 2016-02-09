#include <stdio.h>

int main() {
  int n, m;
  bool check = true;
  scanf("%d %d", &n, &m);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      if (i % 2 == 1) {
        printf("#");
      }
      else if (i % 2 == 0 && check) {
        if (j != m) {
          printf(".");
        }
        else {
          printf("#");
          check = false;
        }
      }
      else if (i % 2 == 0 && !check) {
        if (j == 1) {
          printf("#");
        }
        else if (j != m) {
          printf(".");
        }
        else {
          printf(".");
          check = true;
        }
      }
    }
    printf("\n");
  }
  return 0;
}
