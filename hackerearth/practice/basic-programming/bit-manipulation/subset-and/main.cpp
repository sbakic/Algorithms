#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int z, n, a[1000], k;
    cin >> z >> n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    k = a[0];
    for (int i = 1; i < n; i++) {
      k = (k & a[i]);
    }
    if ((z & k) == 0) cout << "Yes" << '\n';
    else cout << "No" << '\n';
  }
  return 0;
}
