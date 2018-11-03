#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, c = 1, a[100000], ans = 1;
  cin >> n >> c;
  for (int i = 0; i < n; i++) {
     cin >> a[i];
  }
  for (int i = 1; i < n; i++) {
    if (a[i] - a[i - 1] <= c) ans++;
    else ans = 1;
  }
  cout << ans;
  return 0;
}
