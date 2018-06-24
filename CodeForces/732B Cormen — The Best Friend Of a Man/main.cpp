#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[500], ans = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i < n; i++) {
    if (a[i] + a[i - 1] < k) {
      int curr =  k - (a[i] + a[i - 1]);
      a[i] += curr;
      ans += curr;
    }
  }
  cout << ans << '\n';
  for (int i = 0; i < n; i++) {
    cout << a[i] << ' ';
  }
  return 0;
}
