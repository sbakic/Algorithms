#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> a[100000];
  int n, l = 1e9, r = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
    l = min(l, a[i].first);
    r = max(r, a[i].second);
  }
  for (int i = 0; i < n; i++) {
    if (a[i].first == l && a[i].second == r) {
      cout << i + 1;
      return 0;
    }
  }
  cout << "-1";
  return 0;
}
