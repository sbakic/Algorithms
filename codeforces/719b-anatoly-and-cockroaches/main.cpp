#include <bits/stdc++.h>

using namespace std;

int solve(string s, string t, int n) {
  vector<int> r, b;
  for (int i = 0; i < n; i++) {
    if (s[i] != t[i]) {
      if (s[i] == 'r') r.push_back(i);
      else b.push_back(i);
    }
  }
  return max(r.size(), b.size());
}

int main() {
  string s, a = "", b = "";
  int n, x = 0, y = 0;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
      a += "r";
      b += "b";
    }
    else {
      a += "b";
      b += "r";
    }
  }
  for (int i = 0; i < n; i++) {
    if (s[i] != a[i]) x++;
    if (s[i] != b[i]) y++;
  }
  if (x < y) cout << solve(s, a, n);
  else cout << solve(s, b, n);
  return 0;
}
