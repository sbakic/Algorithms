#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[1000], b[1000], ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    scanf("%d", &b[i]);
  }
  for (int l = 0; l < n; l++) {
    for (int r = l; r < n; r++) {
      int currA = 0, currB = 0;
      for (int i = l; i <= r; i++) {
        currA |= a[i];
        currB |= b[i];
      }
      ans = max(ans, currA + currB);
    }
  }
  printf("%d", ans);
  return 0;
}
