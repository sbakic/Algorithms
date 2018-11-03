#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    long long sum;
    scanf("%d", &n);
    sum = (long long) n * (n + 1) / 2;
    int i = 1;
    while (i <= n) {
      sum -= (long long) 2 * i;
      i <<= 1;
    }
    printf("%I64d\n", sum);
  }
  return 0;
}
