#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q, a[100001] = {};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    a[x]++;
  }
  for (int i = 1; i < 100001; i++) {
    a[i] += a[i - 1];
  }
  scanf("%d", &q);
  while (q--) {
    int m;
    scanf("%d", &m);
    if (m > 1e5) m = 1e5;
    printf("%d\n", a[m]);
  }
  return 0;
}
