#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, ans = 0;
  cin >> n >> s;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == s[i]) ans++;
  }
  cout << ans;
  return 0;
}
