#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  vector<pair<int, int>> v;
  pair<int, int> a[600000];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < 2 * n; i++) {
    scanf("%d", &a[i].first);
    a[i].second = i + 1;
  }
  sort(a, a + 2 * n);
  for (int i = 0; i < 2 * n - 1; i += 2) {
    v.push_back(make_pair(a[i].second, a[i + 1].second));
    if (a[i].first != a[i + 1].first) {
      printf("-1");
      return 0;
    }
  }
  for (int i = 0; i < (int) v.size(); i++) {
    printf("%d %d\n", v[i].first, v[i].second);
  }
  return 0;
}
