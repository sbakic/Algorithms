#include <bits/stdc++.h>

using namespace std;

int main() {
  int m;
  char c[10001];
  scanf("%s %d", c, &m);
  while (m--) {
    int l, r, k, a[10001];
    string s = c;
    scanf("%d %d %d", &l, &r, &k);
    k = k % (r - l + 1);
    for (int i = l - 1, j = 0; i < r; i++, j++) {
      a[j] = (i + k < r ? i + k : (l - 1) + (i + k) % r);
    }
    for (int i = l - 1; i < r; i++) {
      c[a[i + 1 - l]] = s[i];
    }
  }
  printf("%s", c);
  return 0;
}
