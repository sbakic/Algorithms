#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, s;
  scanf("%d %d %d", &a, &b, &s);
  a = abs(a);
  b = abs(b);
  if ((a + b) % 2 != 0 && s % 2 == 0 || (a + b) % 2 == 0 && s % 2 != 0 || (a + b) > s) printf("No");
  else printf("Yes");
  return 0;
}
