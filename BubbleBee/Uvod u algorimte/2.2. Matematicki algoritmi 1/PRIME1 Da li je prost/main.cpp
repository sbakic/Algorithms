#include <stdio.h>

bool isPrime(long long n) {
  if (n == 1) {
    return false;
  }
  long long d = 2;
  while (d * d <= n) {
    if (n % d == 0) {
      return false;
    }
    d++;
  }
  return true;
}

int main(){
  long long n;
  scanf("%I64d", &n);
  if (isPrime(n)) {
    printf("DA");
  }
  else {
    printf("NE");
  }
  return 0;
}
