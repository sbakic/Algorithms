#include <bits/stdc++.h>

using namespace std;

int main() {
  string s[100];
  int n, m, ans = 1, mod = 1e9 + 7;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < m; i++) {
    set<int> a;
    for (int j = 0; j < n; j++) {
      a.insert(s[j][i]);
    }
    ans = ((long long) ans * a.size()) % mod;
  }
  cout << ans;
  return 0;
}
