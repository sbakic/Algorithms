#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, string> m;
  int q;
  cin >> q;
  while (q--) {
    string s, x;
    cin >> s >> x;
    m[s] = x;
  }
  string x;
  while (cin >> x) {
    if (m[x] == "") cout << "Not found" << '\n';
    else cout << x << "=" << m[x] << '\n';
  }
  return 0;
}
