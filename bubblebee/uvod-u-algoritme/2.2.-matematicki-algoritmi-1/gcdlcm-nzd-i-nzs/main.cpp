#include <stdio.h>

int gcd(int a, int b) {
  while (b != 0) {
    int tmp = a;
    a = b;
    b = tmp % b;
  }
  return a;
}

long long lcm(long long a, long long b) {
  return (a / gcd(a, b)) * b;
}

int main(){
  int a,b;
  scanf("%d %d", &a, &b);
  printf("%d\n%I64d\n", gcd(a,b), lcm((long long) a, (long long) b));

  return 0;
}
