#include <stdio.h>

int main() {
  long long m, h1, a1, x1, y1, h2, a2, x2, y2;
  scanf("%I64d %I64d %I64d %I64d %I64d %I64d %I64d %I64d %I64d", &m, &h1, &a1, &x1, &y1, &h2, &a2, &x2, &y2);
  long long firstTime = 0;
  while (h1 != a1) {
    h1 = (x1 * h1 + y1) % m;
    h2 = (x2 * h2 + y2) % m;
    firstTime++;
    if (firstTime > m + 1) {
      printf("-1");
      return 0;
    }
  }
  if (h2 == a2) {
    printf("%I64d", firstTime);
    return 0;
  }
  long long secondTime = 0;
  long long h11 = 1, h12 = 0;
  while (secondTime == 0 || h1 != a1) {
    h1 = (x1 * h1 + y1) % m;
    h11 = (x2 * h11) % m;
    h12 = (x2 * h12 + y2) % m;
    secondTime++;
    if (secondTime > m + 1) {
      printf("-1");
      return 0;
    }
  }
  long long thirdTime = 0;
  while (h2 != a2) {
    thirdTime++;
    h2 = (h11 * h2 + h12) % m;
    if (thirdTime > m + 1) {
      printf("-1");
      return 0;
    }
  }
  printf("%I64d", firstTime + secondTime * thirdTime);
  return 0;
}
