#include <stdio.h>
#include <math.h>

bool prime[1000001];

void eratosthenes(int n) {
  prime[0] = prime[1] = true;
  for (int i = 2; i * i <= n; i++) {
    if (!prime[i]) {
      for (int j = i; j <= n / i; j++) {
        prime[i * j] = true;
      }
    }
  }
}

int main() {
  int t;
  eratosthenes(1000000);
  scanf("%d", &t);
  while (t--) {
    long long n;
    scanf("%I64d", &n);
    long long i = (long long) sqrt(n);
    if (i * i == n && !prime[i]) printf("YES\n");
    else printf("NO\n");
  }
  return 0;
}
