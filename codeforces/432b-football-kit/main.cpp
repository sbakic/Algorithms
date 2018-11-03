#include <bits/stdc++.h>
#include <utility>

using namespace std;

int main() {
  pair <int, int> a[100000];
  int n, home[100001] = {}, away[100001] = {};
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].first, &a[i].second);
    home[a[i].first]++;
    away[a[i].second]++;
  }
  for (int i = 0; i < n; i++) {
    printf("%d %d\n", n - 1 + home[a[i].second], 2 * (n - 1) - (n - 1 + home[a[i].second]));
  }
  return 0;
}
