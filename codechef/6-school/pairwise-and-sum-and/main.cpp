#include <stdio.h>

int ones[30];

int main() {
  int n, a;
  long long max = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a);
		for (int j = 0; j < 30; j++) {
      if (a & (1 << j)) ones[j]++;
		}
	}
	for (int i = 0; i < 30; i++) {
    max += 1LL * ones[i] * (1LL * ones[i] - 1LL) * (1LL << i);
	}
	printf("%lld\n", max / 2LL);
	return 0;
}
