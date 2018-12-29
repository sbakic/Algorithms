#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0, j = 1; i < n; i += j, j++) {
    cout << s[i];
  }
  return 0;
}
