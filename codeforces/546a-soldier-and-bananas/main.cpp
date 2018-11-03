#include <stdio.h>

int main() {
  int k, n, w, count = 0;
  scanf("%d %d %d", &k, &n, &w);
  for (int i = 1; i <= w; i++) {
    count += i * k;
  }
  if (count > n) printf("%d", count - n);
  else printf("0");
  return 0;
}
