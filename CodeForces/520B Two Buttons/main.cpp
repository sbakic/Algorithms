#include <stdio.h>

int main() {
  int n, m, count = 0;
  scanf("%d %d", &n, &m);
  while (n < m) {
    if (m % 2 == 1) m++;
    else m /= 2;
    count ++;
  }
  printf("%d", count + n - m);
  return 0;
}
