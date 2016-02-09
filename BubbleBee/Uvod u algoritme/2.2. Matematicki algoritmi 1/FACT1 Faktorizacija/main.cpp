#include <stdio.h>

long p[12],a[12];

void factorization(int n) {
  int k = -1;
  int d = 2;
  while (d * d <= n) {
    if (n % d == 0) {
      k++;
      p[k] = d;
      a[k] = 0;
      while (n % d == 0) {
        n /= d;
        a[k]++;
      }
    }
  d++;
  }
  if (n > 1) {
    k++;
    p[k] = n;
    a[k] = 1;
  }

  for(int i = 0; i < k + 1 ; i++) {
    printf("%ld^%ld", p[i], a[i]);
    if(i != k) {
      printf("*");
    }
    else {
      printf("\n");
    }
  }
}

int main(){
  long t, n;
  scanf("%ld", &t);
  while (t--) {
    scanf("%ld", &n);
    factorization(n);
  }

  return 0;
}
