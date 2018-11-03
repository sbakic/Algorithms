#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> a[1000];
  bool b[1000][1000] = {};
  int n, m, s[1001], ans = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &s[i]);
    a[i].second = i;
    a[i].first = s[i];
  }
  sort(a, a + n, greater<pair<int, int>>());
  while (m--) {
    int x, y;
    scanf("%d %d", &x, &y);
    b[x - 1][y - 1] = b[y - 1][x - 1] = true;
  }
  for (int i = 0; i < n; i++) {
    int k = a[i].second;
    for (int j = 0; j < n; j++) {
      if (b[k][j]) {
        b[k][j] = b[j][k] = false;
        ans += s[j];
      }
    }
  }
  printf("%d", ans);
  return 0;
}
