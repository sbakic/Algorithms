#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  bool ans = false;
  cin >> n;
  while (n--) {
    string s;
    int x, y;
    cin >> s >> x >> y;
    if (x >= 2400 && y > x) ans = true;
  }
  if (ans) cout << "YES";
  else cout << "NO";
  return 0;
}
