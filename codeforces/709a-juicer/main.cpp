#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000], b, d, ans = 0, curr = 0;
  cin >> n >> b >> d;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] <= b) curr += a[i];
    if (curr > d) {
      ans++;
      curr = 0;
    }
  }
  cout << ans;
  return 0;
}
