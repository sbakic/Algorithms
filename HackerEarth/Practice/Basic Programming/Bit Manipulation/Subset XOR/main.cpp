#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (n > 1) cout << "0\n";
    else cout << a[0] << '\n';
  }
  return 0;
}
