#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == toupper(s[i])) s[i] = tolower(s[i]);
    else s[i] = toupper(s[i]);
  }
  cout << s;
  return 0;
}
