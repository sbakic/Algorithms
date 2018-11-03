#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  long long m;
  cin >> s >> m;
  int n = s.size(), curr = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') curr++;
  }
  for (int i = 0; i < m % n; i++) {
    if (s[i] == 'a') ans++;
  }
  cout << curr * (m / n) + ans;
  return 0;
}
