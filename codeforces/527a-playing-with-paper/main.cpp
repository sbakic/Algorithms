#include <stdio.h>

int main() {
  long long a, b, count = 0;
  scanf("%I64d %I64d", &a, &b);
  while (a > 0 && b > 0) {
    if (a > b) {
      count += (a / b);
      a %= b;
    }
    else {
      count += (b / a);
      b %= a;
    }
  }
  printf("%I64d", count);
  return 0;
}
