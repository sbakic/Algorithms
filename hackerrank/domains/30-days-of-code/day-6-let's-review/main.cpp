#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i += 2) {
      cout << s[i];
    }
    cout << ' ';
    for (int i = 1; i < n; i += 2) {
      cout << s[i];
    }
    cout << '\n';
  }
  return 0;
}
