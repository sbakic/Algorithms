#include <bits/stdc++.h>

using namespace std;

bool custom_sort(const pair<int, int> &a, const pair<int, int> &b) {
  if (a.first != b.first) return a.first > b.first;
  return a.second < b.second;
}

int main() {
  pair<int, int> a[50];
  int n, k, ans = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
  }
  vector< pair<int,int > > v;
  sort(a, a + n, custom_sort);
  for (int i = 0; i < n; i++) {
    if (a[i].first == a[k - 1].first && a[i].second == a[k - 1].second) ans++;
  }
  cout << ans;
  return 0;
}
