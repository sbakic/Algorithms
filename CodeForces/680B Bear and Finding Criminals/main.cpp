#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[100], ans = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (a[k - 1] == 1) ans++;
  for (int i = k, j = k - 2, count = 1; count < n; i++, j--) {
    if (i < n && j >= 0) {
      if (a[i] == 1 && a[j] == 1) ans += 2;
      count += 2;
    }
    else if (i < n) {
      if (a[i] == 1) ans++;
      count++;
    }
    else if (j >= 0) {
      if (a[j] == 1) ans++;
      count++;
    }
  }
  cout << ans;
  return 0;
}
