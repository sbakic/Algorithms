#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), count = 0, curr = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] != '1' && s[i] != '4') count = 3;
    if (s[i] == '4' && s[i + 1] == '4') curr++;
    else curr = 0;
    count = max(count, curr);
  }
  if (count > 1 || s[0] == '4' || s[0] == s[1] == '4') cout << "NO";
  else cout << "YES";
  return 0;
}
