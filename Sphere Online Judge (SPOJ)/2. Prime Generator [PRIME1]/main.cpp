#include <stdio.h>

bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
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
  int t, m, n;
  scanf("%d", &t);

  while (t--) {
    scanf("%d %d", &m, &n);
    for(int i = m; i <= n; i++) {
      if(isPrime(i)) printf("%d\n", i);
    }
  }

  return 0;
}
