#include <stdio.h>

int main() {
  int n, a[100][100], b[100], count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0 ; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
    b[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      switch (a[i][j]) {
        case 1: b[i]--; break;
        case 2: b[j]--; break;
        case 3: b[i]--; b[j]--; break;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (b[i] == 0) count++;
  }
  printf("%d\n", count);
  for (int i = 0; i < n; i++) {
    if (b[i] == 0) printf("%d ", i + 1);
  }
  return 0;
}
