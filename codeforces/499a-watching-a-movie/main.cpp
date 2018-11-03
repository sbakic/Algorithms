#include <stdio.h>

int main(){
  int n, x, l, r, min = 0, current = 1;
  scanf("%d %d", &n, &x);
  while (n--) {
    scanf("%d %d", &l, &r);
    while (current + x <= l) {
      current += x;
    }
    min += r - current + 1;
    current = r + 1;
  }
  printf("%d", min);

  return 0;
}
