#include <bits/stdc++.h>

using namespace std;

int main() {
  bool c[100] = {};
  int n, a[100], b[100], ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j) continue;
      if (b[i] == a[j]) c[j] = true;
    }
  }
  for (int i = 0; i < n; i++) {
    if (!c[i]) ans++;
  }
  cout << ans;
  return 0;
}
