#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), l = 0;
  while (s[l] == 'a') l++;
  if (l == n) s[n - 1] = 'z';
  for (int i = l; i < n; i++) {
    if (s[i] == 'a') break;
    s[i]--;
  }
  cout << s;
  return 0;
}
