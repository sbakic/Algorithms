#include <stdio.h>

bool prime[1000000];
int a[80000];

int eratosthenes(int n) {
  prime[1] = true;
  int size = 0;
  for (int i = 2; i <= n; i++) {
    if (prime[i] == false) {
      a[size++] = i;
      for (int j = i; j <= n / i; j++) {
        prime[i * j] = true;
      }
    }
  }
  return size;
}

bool isPrime(int n) {
  int d = 2;
  while (d * d <= n) {
    if (n % d == 0) {
      return false;
    }
    d++;
  }
  return true;
}

int main(){
  int n, count = 0;
  scanf("%d", &n);
  int size = eratosthenes(n);
  a[0] = 2;
  for (int i = 1; i < size; i++) {
    if (isPrime(a[0] + a[i]) && a[0] + a[i] <= n) count++;
  }
  printf("%d", count);
  return 0;
}
