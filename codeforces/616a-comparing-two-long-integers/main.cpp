#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  char a[1000001], b[1000001], x[1000001], y[1000001];
  scanf("%s %s", a, b);
  n = strlen(a);
  m = strlen(b);
  if (n > m) {
    for (int i = 0; i < n; i++) {
      if (n - i <= m) y[i] = b[m + i - n];
      else y[i] = '0';
      x[i] = a[i];
    }
    x[n] = y[n] = '\0';
  }
  else if (m > n) {
    for (int i = 0; i < m; i++) {
      if (m - i <= n) x[i] = a[n + i - m];
      else x[i] = '0';
      y[i] = b[i];
    }
    x[m] = y[m] = '\0';
  }
  else {
    for (int i = 0; i < n; i++) {
      x[i] = a[i];
      y[i] = b[i];
    }
  }
  for (int i = 0; i < max(n, m); i++) {
    if (x[i] - 0 > y[i] - 0) {
      printf(">");
      return 0;
    }
    if (x[i] - 0 < y[i] - 0) {
      printf("<");
      return 0;
    }
  }
  printf("=");
  return 0;
}
