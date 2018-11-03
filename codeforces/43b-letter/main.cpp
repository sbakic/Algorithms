#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[128] = {}, b[128] = {};
  string s, t;
  getline(cin, s);
  getline(cin, t);
  int n = s.size(), m = t.size();
  for (int i = 0; i < n; i++) {
    if (s[i] != ' ') a[s[i]]++;
  }
  for (int i = 0; i < m; i++) {
    if (t[i] != ' ') b[t[i]]++;
  }
  for (int i = 0; i < 128; i++) {
    if (a[i] < b[i]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
