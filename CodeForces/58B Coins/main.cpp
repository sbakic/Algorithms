#include <bits/stdc++.h>

using namespace std;

int a[15], p[15];

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
}

int main() {
  int n, coins = 0;
  cin >> n;
  factorization(n);
  for (int i = 0; i < 15; i++) {
    while (a[i] > 0 && n % p[i] == 0) {
      cout << n << " ";
      n /= p[i];
    }
  }
  cout << "1";
  return 0;
}
