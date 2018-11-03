#include <bits/stdc++.h>

using namespace std;

bool check(bool a[], bool b[]) {
  for (int i = 0; i < 26; i++) {
    if (a[i] & b[i]) return true;
  }
  return false;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    bool a[26] = {}, b[26] = {};
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    for (int i = 0; i < n; i++) {
      a[s[i] - 'a'] = true;
    }
    for (int i = 0; i < m; i++) {
      b[t[i] - 'a'] = true;
    }
    if(check(a, b)) printf("Yes\n");
    else printf("No\n");
  }
  return 0;
}
