#include <bits/stdc++.h>

using namespace std;

int main() {
  bool b[5001] = {};
  int n, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    b[a] = true;
  }
  for (int i = 1; i <= n; i++) {
    if (!b[i]) ans++;
  }
  cout << ans;
  return 0;
}
