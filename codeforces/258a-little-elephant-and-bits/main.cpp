#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0, j = s.find_first_not_of('1'); i < n; i++) {
    if (j == -1) j = n - 1;
    if (i == j) continue;
    cout << s[i];
  }
  return 0;
}
