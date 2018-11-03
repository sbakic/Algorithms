#include <stdio.h>

int main() {
  int n, x, y, z, sumX = 0, sumY = 0, sumZ = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d %d", &x, &y, &z);
    sumX += x;
    sumY += y;
    sumZ += z;
  }
  (sumX == 0 && sumY == 0 && sumZ == 0) ? printf("YES") : printf("NO");
  return 0;
}
