#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[200000], ans = 1e9;
  string s;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i < n; i++) {
    if (s[i] == 'L' && s[i - 1] == 'R') ans = min(ans, (a[i] - a[i - 1]) / 2);
  }
  cout << (ans == 1e9 ? -1 : ans);
  return 0;
}
