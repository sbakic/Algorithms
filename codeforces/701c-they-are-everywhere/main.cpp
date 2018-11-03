#include <bits/stdc++.h>

using namespace std;

int main() {
  set<int> c, b;
  string s;
  int n, ans = 1e9, a[150] = {};
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    c.insert(s[i]);
  }
  int l = 0, r = 0;
  while (b.size() < c.size()) {
    b.insert(s[r]);
    a[s[r++]]++;
  }
  r--;
  ans = r - l + 1;
  while (a[s[l]] > 1 || r < n - 1) {
    while (a[s[l]] > 1)
      a[s[l++]]--;
    ans = min(ans, r - l + 1);
    if (r < n - 1) r++;
    a[(int) s[r]]++;
  }
  cout << max(1, ans);
  return 0;
}
