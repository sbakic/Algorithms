#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '4' || s[i] == '7') ans++;
  }
  if (ans == 4 || ans == 7) cout << "YES";
  else cout << "NO";
  return 0;
}
