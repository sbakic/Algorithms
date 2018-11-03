#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> a[100000];
  int n, minP = 100, ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].first, &a[i].second);
  }
  for (int i = 0; i < n; i++) {
    minP = min(minP, a[i].second);
    ans += a[i].first * minP;
  }
  printf("%d", ans);
  return 0;
}
