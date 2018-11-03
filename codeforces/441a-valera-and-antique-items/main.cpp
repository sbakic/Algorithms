#include <stdio.h>

int main() {
  int n, v, a[50], count = 0, j = 0;
  scanf("%d %d", &n, &v);
  for (int i = 0; i < n; i++) {
    int k;
    scanf("%d", &k);
    bool check = false;
    while (k--) {
      int s;
      scanf("%d", &s);
      if (v > s) check = true;
    }
    if (check) a[j++] = i + 1;
  }
  printf("%d\n", j);
  for (int i = 0; i < j; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
