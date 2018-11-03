#include <stdio.h>
#include <math.h>

int main() {
  int n, a[101], position = -1, maxA = 0;
  float m;
  scanf("%d %f", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    int x = ceil(a[i] / m);
    if (x >= maxA) {
      maxA = x;
      position = i;
    }
  }
  printf("%d", position + 1);
  return 0;
}
