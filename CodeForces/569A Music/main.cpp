#include <stdio.h>
#include <math.h>

int main() {
  int t, s, q;
  scanf("%d %d %d", &t, &s, &q);
  printf("%0.f", ceil(log(t * 1. / s) / log(q)));
  return 0;
}
