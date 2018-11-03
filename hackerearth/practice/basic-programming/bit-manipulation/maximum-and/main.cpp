#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long a, b;
    cin >> a >> b;
    if (b - a < 2) cout << (b & a) << '\n';
    else {
      if (b % 2 == 0) cout << b - 2 << '\n';
      else cout << b - 1 << '\n';
    }
  }
  return 0;
}
