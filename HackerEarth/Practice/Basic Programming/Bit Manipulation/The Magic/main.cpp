#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, ans = 0;
    cin >> n;
    while (n) {
      n &= (n - 1);
      ans++;
    }
    cout << ans << '\n';
  }
  return 0;
}
