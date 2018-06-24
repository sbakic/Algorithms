#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), ans = 0;
  for (int i = 0; i < n; i++) {
    if (i == 0) ans += min(abs(s[i] - 'a'), 26 - abs(s[i] - 'a'));
    else ans += min(abs(s[i] - s[i - 1]), 26 - abs(s[i] - s[i - 1]));
  }
  cout << ans;
  return 0;
}
