#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[100000], curr = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  while (m--) {
    int t;
    scanf("%d", &t);
    if (t == 1) {
      int v, x;
      scanf("%d %d", &v, &x);
      if (a[v - 1] + curr > x) a[v - 1] -= a[v - 1] + curr - x;
      else a[v - 1] += x - a[v - 1] - curr;
    }
    else if (t == 2) {
      int y;
      scanf("%d", &y);
      curr += y;
    }
    else {
      int q;
      scanf("%d", &q);
      printf("%d\n", a[q - 1] + curr);
    }
  }
  return 0;
}
