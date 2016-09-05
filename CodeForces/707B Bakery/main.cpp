#include <bits/stdc++.h>

using namespace std;

int main() {
  bool a[100001] = {};
  int n, m, k, b[100001], u[100000], v[100000], l[100000], ans = 1e9 + 1;
  for (int i = 0; i < 100001; i++) {
    b[i] = 1e9 + 1;
  }
  scanf("%d %d %d", &n, &m, &k);
  for (int i = 0; i < m; i++) {
    scanf("%d %d %d", &u[i], &v[i], &l[i]);
  }
  for (int i = 0; i < k; i++) {
    int x;
    scanf("%d", &x);
    a[x] = true;
  }
  for (int i = 0; i < m; i++) {
    if (a[u[i]] && a[v[i]]) continue;
    if (a[u[i]]) b[u[i]] = min(b[u[i]], l[i]);
    if (a[v[i]]) b[v[i]] = min(b[v[i]], l[i]);
  }
  for (int i = 0; i < 100001; i++) {
    ans = min(ans, b[i]);
  }
  printf("%d", ans == 1e9 + 1 ? -1 : ans);
  return 0;
}
