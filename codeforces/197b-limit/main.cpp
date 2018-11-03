#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main() {
  int n, m, a[101], b[101], x = 100, y = 100;
  cin >> n >> m;
  for (int i = 0; i < n + 1; i++) {
    cin >> a[i];
    if (a[i]) x = min(x, i);
  }
  for (int i = 0; i < m  + 1; i++) {
    cin >> b[i];
    if (b[i]) y = min(y, i);
  }
  if (n - x > m - y) {
    if (a[x] * b[y] > 0) cout << "Infinity";
    else cout << "-Infinity";
  }
  else if (n - x < m - y) cout << "0/1";
  else cout << (a[x] * b[y] > 0 ? "" : "-") << abs(a[x]) / gcd(abs(a[x]), abs(b[y])) << "/" << abs(b[y]) / gcd(abs(a[x]), abs(b[y]));
  return 0;
}
