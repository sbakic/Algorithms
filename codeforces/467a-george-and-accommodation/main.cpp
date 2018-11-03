#include <stdio.h>

int main() {
  int n, p, q, counter = 0;
  scanf("%d", &n);
  while (n--) {
    scanf("%d %d", &p, &q);
    if (p + 2 <= q) counter++;
  }
  printf("%d", counter);
  return 0;
}
