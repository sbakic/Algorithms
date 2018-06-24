#include <bits/stdc++.h>

using namespace std;

int main() {
  set<string> S;
  string s;
  cin >> s;
  int n = s.size();
  S.insert(s);
  for (int i = 1; i < n; i++) {
    string curr = s.substr(i, n - 1) + s.substr(0, i);
    S.insert(curr);
  }
  cout << S.size();
  return 0;
}
