#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), curr = 1;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == s[i + 1]) curr++;
    else curr = 1;
    if (curr == 7) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
