#include <stdio.h>

int main() {
  int x;
  float y;
  scanf("%d %f", &x, &y);
  x + 0.5 > y? printf("%.2f", y): x % 5 == 0? printf("%.2f", y - x - 0.5): printf("%.2f", y);
  return 0;
}
