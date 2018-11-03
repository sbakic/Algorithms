#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, v, a[3002] = {}, ans = 0;
  scanf("%d %d", &n, &v);
  while (n--) {
    int x, y;
    scanf("%d %d", &x, &y);
    a[x] += y;
  }
  for (int i = 1; i <= 3001; i++) {
    int curr = v;
    if (a[i - 1]) {
      if (a[i - 1] >= curr) {
        a[i - 1] -= curr;
        ans += curr;
        curr = 0;
      }
      else {
        curr -= a[i - 1];
        ans += a[i - 1];
        a[i - 1] = 0;
      }
    }
    if (a[i] && curr) {
      if (a[i] >= curr) {
        a[i] -= curr;
        ans += curr;
      }
      else {
        curr -= a[i];
        ans += a[i];
        a[i] = 0;
      }
    }
  }
  printf("%d", ans);
  return 0;
}
