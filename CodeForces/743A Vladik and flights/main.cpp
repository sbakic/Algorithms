#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, a, b;
  cin >> n >> a >> b >> s;
  if (s[a - 1] == s[b - 1]) cout << "0";
  else cout << "1";
  return 0;
}
