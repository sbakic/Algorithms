#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<pair<int, int>> v;
  int n, a[1000], sum = 0, mid;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  mid = sum / n;
  for (int i = 0, j = 0; i < n; i++) {
    if (a[i] != mid) v.push_back(make_pair(a[i], i + 1));
  }
  if (v.size() > 2 || sum % n != 0) cout << "Unrecoverable configuration.";
  else if (v.size() == 0) cout << "Exemplary pages.";
  else {
    if (v[0].first > v[1].first) cout << v[0].first - mid << " ml. from cup #" << v[1].second << " to cup #" << v[0].second << ".";
    else cout << v[1].first - mid << " ml. from cup #" << v[0].second << " to cup #" << v[1].second << ".";
  }
  return 0;
}
