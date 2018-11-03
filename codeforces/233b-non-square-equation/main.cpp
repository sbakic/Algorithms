#include <bits/stdc++.h>

using namespace std;

int sum(long long n) {
  int curr = 0;
  while (n) {
    curr += n % 10;
    n /= 10;
  }
  return curr;
}

int main() {
  long long n;
  scanf("%I64d", &n);
  for (int i = 1; i < 90; i++) {
    long long curr = (-i + sqrt(i * i + 4 * n)) / 2;
    if (curr * curr + sum(curr) * curr - n == 0) {
      printf("%I64d", curr);
      return 0;
    }
  }
  printf("-1");
  return 0;
}
