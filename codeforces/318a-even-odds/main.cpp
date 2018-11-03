#include <stdio.h>

int main() {
  long long n, k, a;
  scanf("%I64d %I64d", &n, &k);
  a = (n % 2) == 0 ? n : n - 1;
  if (n % 2 == 0) printf("%I64d", (k <= n / 2LL) ? 2LL * k - 1LL : a - 2LL * (n - k));
  else printf("%I64d", (k - 1 <= n / 2LL) ? 2LL * k - 1LL : a - 2LL * (n - k));
  return 0;
}
