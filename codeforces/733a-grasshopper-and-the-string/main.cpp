#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v;
  string s;
  cin >> s;
  int n = s.size(), ans = 0;
  v.push_back(-1);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') v.push_back(i);
  }
  v.push_back(n);
  for (int i = 1; i < (int) v.size(); i++) {
    ans = max(ans, v[i] - v[i - 1]);
  }
  cout << (v.size() == 2 ? n + 1 : ans);
  return 0;
}
