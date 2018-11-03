#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, k;
  cin >> n >> m;
  k = min(n, m) + 1;
  cout << k << '\n';
  for (int i = 0, j = k - 1; i < k; i++, j--) {
    cout << i << ' ' << j << '\n';
  }
  return 0;
}
