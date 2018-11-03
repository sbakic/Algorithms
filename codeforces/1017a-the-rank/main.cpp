#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a[1000], n, b;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x, y, z, v;
    cin >> x >> y >> z >> v;
    a[i] = x + y + z + v;
  }
  b = a[0];
  sort(a, a + n);
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == b) {
      cout << n - i;
      break;
    }
  }
  return 0;
}
