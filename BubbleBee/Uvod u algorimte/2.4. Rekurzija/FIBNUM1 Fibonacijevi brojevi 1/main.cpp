#include <stdio.h>

long long fibonacci(int n) {
  if (n <= 2) return 1;
  return  fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%I64d", fibonacci(n));
  return 0;
}
