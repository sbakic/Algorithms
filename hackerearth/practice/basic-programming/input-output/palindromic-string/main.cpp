#include <bits/stdc++.h>

using namespace std;

bool check(string s, int n) {
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) return false;
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  cout << (check(s, s.size()) ? "YES" : "NO");
  return 0;
}
