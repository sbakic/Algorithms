#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> a[1000];
  int n, sum = 0, curr = 1;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].second, &a[i].first);
  }
  sort(a, a + n, greater<pair<int, int>>());
  for (int i = 0; i < n && curr > 0; i++) {
    sum += a[i].second;
    curr += a[i].first - 1;
  }
  printf("%d", sum);
  return 0;
}
