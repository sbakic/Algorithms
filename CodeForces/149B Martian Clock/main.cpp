#include <bits/stdc++.h>

using namespace std;

int solve(string s, int base) {
  int n = s.size(), curr = 0;
  for (int i = 0; i < n; i++) {
    int x = 0;
    if (s[i] >= '0' && s[i] <= '9') x = s[i] - '0';
    else x = s[i] - 'A' + 10;
    if (x >= base) return -1;
    curr = curr * base + x;
  }
  return curr;
}

int main() {
  vector <int> v;
  string s, a, b;
  cin >> s;
  int n = s.size(), m;
  for (int i = 0; i < n; i++) {
    if (s[i] == ':') s[i] = ' ';
  }
  stringstream in(s);
  in >> a >> b;
  for (int i = 2; i < 100; i++) {
    int x = solve(a, i);
    int y = solve(b, i);
    if (x >= 0 && x < 24 && y >= 0 && y < 60) v.push_back(i);
  }
  m = v.size();
  if (m == 0) cout << "0";
  else if (v[m - 1] == 99) cout << "-1";
  else {
    for (int i = 0; i < m; i++) {
      cout << v[i] << " ";
    }
  }
  return 0;
}
