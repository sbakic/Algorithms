#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100], M = 0, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    M = max(M, a[i]);
  }
  for (int i = 0; i < n; i++) {
    ans += M - a[i];
  }
  cout << ans;
  return 0;
}
