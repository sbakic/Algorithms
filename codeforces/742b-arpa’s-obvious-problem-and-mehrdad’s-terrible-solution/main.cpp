#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, a[200010] = {};
  long long ans = 0;
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    int y;
    cin >> y;
    a[y]++;
  }
  for (int i = 1; i < 100001; i++) {
    if (a[i] > 0) {
      int y = i ^ x;
      if (y == i) {
        if (a[i] > 1) ans += (long long) a[i] * (a[i] - 1) / 2;
      }
      else {
        if (a[y] > 0) {
          ans += (long long) a[i] * a[y];
          a[i] = a[y] = 0;
        }
      }
    }
  }
  cout << ans;
  return 0;
}
