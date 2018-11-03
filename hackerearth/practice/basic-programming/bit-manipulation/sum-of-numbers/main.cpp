#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a[15], k;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    cin >> k;
    for (int i = 0; i < (1 << n); i++) {
      int curr = 0;
      for (int j = 0; j < n; j++) {
        if ((i & (1 << j)) > 0) curr += a[j];
      }
      if (curr == k) found = true;
    }
    if (found) cout << "YES" << '\n';
    else cout << "NO" << '\n';
  }
  return 0;
}
