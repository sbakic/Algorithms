#include <stdio.h>

int main() {
  int t, n, m;
  bool prime[1000002];

  for (int i = 0; i <= 1000000; i++) {
    prime[i] = true;
  }
  prime[0] = prime[1] = false;
  for (int i = 2; i * i <= 1000000; i++) {
    if (prime[i]) {
      for(int j = 2 * i; j <= 1000000; j += i) {
        prime[j] = false;
      }
    }
  }

  scanf("%d", &t);
  while(t--) {
    scanf("%d %d", &m, &n);

    if (n <= 1000000) {
      for (int i = m; i <= n; i++) {
        if (prime[i]) printf("%d\n", i);
      }
    }
    else {
      bool nextPrimes[n - m + 1];
      for (int i = 0; i < n - m + 1; i++) {
        nextPrimes[i] = true;
      }
      for (int i = 2; i <= 1000000; i++) {
        if (prime[i]) {
          int k = m / i;
          k *= i;
          if (k < m) k += i;
          if (k == i) k += i;

          for ( ; k <= n; k += i)
            nextPrimes[k - m] = false;
        }
      }
      for (int i = 0; i < n - m + 1; i++) {
        if (nextPrimes[i]) printf("%d\n", m + i);
      }
    }
  }

	return 0;
}
