#include <bits/stdc++.h>

using namespace std;

int main() {
  char s[1001][1001];
  int n, m, ans = 0, c[1000], r[1000];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", s[i]);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] == '.') continue;
      c[i]++;
      r[j]++;
      ans++;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      int curr = ans;
      if (s[i][j] == '*') curr++;
      if (c[i] + r[j] == curr) {
        printf("YES\n%d %d", i + 1, j + 1);
        return 0;
      }
    }
  }
  printf("NO");
  return 0;
}
