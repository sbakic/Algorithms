#include <bits/stdc++.h>

using namespace std;

int main() {
  set<char> a;
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    a.insert(s[i]);
  }
  if (a.size() % 2 == 0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
  return 0;
}
