#include <stdio.h>

int main() {
  long long n, m, maxK, minK;
  scanf("%I64d %I64d", &n, &m);
  maxK = (n - (m - 1 ) - 1) * (n - (m - 1 )) / 2;
  minK = (m - (n % m)) * (n / m - 1) * ((n / m - 1) + 1) / 2 + (n % m) * (n / m) * (n / m  + 1) / 2;
  printf("%I64d %I64d", minK, maxK);
  return 0;
}
