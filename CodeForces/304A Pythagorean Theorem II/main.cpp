#include <bits/stdc++.h>

using namespace std;

int main () {
  int n, ans = 0;
  scanf("%d", &n);
  for (int a = 1; a <= n; a++) {
    int c = 1;
    for (int b = a; b <= n && c <= n; b++) {
      while (c <= n && a * a + b * b > c * c) c++;
      if (a * a + b * b == c * c) ans++;
    }
  }
  printf ("%d", ans);
  return 0;
}
