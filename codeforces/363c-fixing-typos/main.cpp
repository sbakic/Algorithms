#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<char, int> a[200000] = {};
  string s;
  int m = 0;
  cin >> s;
  int n = s.size();
  a[0].first = s[0];
  a[0].second++;
  for (int i = 1; i < n; i++) {
    if (a[m].first != s[i]) {
      m++;
      a[m].first = s[i];
    }
    if (a[m].second < 2) a[m].second++;
    if (a[m].second == 2 && a[m - 1].second == 2) a[m].second = 1;
  }
  for (int i = 0; i <= m; i++) {
    while (a[i].second--) cout << a[i].first;
  }
  return 0;
}
