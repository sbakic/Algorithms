#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, k, a[100], ans = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = n - 1;
  while (a[l] <= k && l < n ) {
    ans++;
    l++;
  }
  while (a[r] <= k && r > l) {
    ans++;
    r--;
  }
  cout << ans;
  return 0;
}
