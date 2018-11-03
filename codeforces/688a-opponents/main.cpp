#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d, curr = 0, ans = 0;
  cin >> n >> d;
  while (d--) {
    string s;
    cin >> s;
    bool found = false;
    for (int i = 0; i < n; i++) {
      if (s[i] == '0') found = true;
    }
    if (found) curr++;
    else curr = 0;
    ans = max(ans, curr);
  }
  cout << ans;
  return 0;
}
