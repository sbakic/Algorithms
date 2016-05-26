#include <bits/stdc++.h>

using namespace std;

int main() {
  string a, b, ans = "";
  cin >> a >> b;
  int n = a.size();
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == b[i]) ans += "0";
    else ans += "1";
  }
  reverse(ans.begin(), ans.end());
  cout << ans;
  return 0;
}
