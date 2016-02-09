#include <stdio.h>

int main () {
  int a1, a2, a3, b1, b2, b3, n, sumCups, sumMedals;
  scanf("%d %d %d %d %d %d %d", &a1, &a2, &a3, &b1, &b2, &b3, &n);
  sumCups = a1 + a2 + a3;
  sumMedals = b1 + b2 + b3;
  while (sumCups > 0 || sumMedals > 0) {
    if (sumCups > 0) {
      sumCups -= 5;
      n--;
      continue;
    }
    if (sumMedals > 0) {
      sumMedals -= 10;
      n--;
      continue;
    }
  }
  n >= 0? printf("YES"): printf("NO");
  return 0;
}
