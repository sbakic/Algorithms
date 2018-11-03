#include <bits/stdc++.h>

using namespace std;

string make(string a, string b, string c) {
  string ans = "";
  int n = a.size(), m = b.size(), k = c.size();
  for (int i = 0; i < n; i++) {
    if (a[i] != '-' && a[i] != '_' && a[i] != ';') ans += tolower(a[i]);
  }
  for (int i = 0; i < m; i++) {
    if (b[i] != '-' && b[i] != '_' && b[i] != ';') ans += tolower(b[i]);
  }
  for (int i = 0; i < k; i++) {
    if (c[i] != '-' && c[i] != '_' && c[i] != ';') ans += tolower(c[i]);
  }
  return ans;
}

bool check(string t, string s) {
  string ans = "";
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] != '-' && s[i] != '_' && s[i] != ';') ans += tolower(s[i]);
  }
  return ans == t;
}

int main() {
  string t[3], s[1000], a = "", b = "", c = "", d = "", e = "" , f = "";
  for (int i = 0; i < 3; i++) {
    cin >> t[i];
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  a = make(t[0], t[1], t[2]);
  b = make(t[0], t[2], t[1]);
  c = make(t[1], t[0], t[2]);
  d = make(t[1], t[2], t[0]);
  e = make(t[2], t[0], t[1]);
  f = make(t[2], t[1], t[0]);
  for (int i = 0; i < n; i++) {
    if (check(a, s[i]) || check(b, s[i]) || check(c, s[i]) || check(d, s[i]) || check(e, s[i]) || check(f, s[i])) cout << "ACC" << '\n';
    else cout << "WA" << '\n';
  }
  return 0;
}
