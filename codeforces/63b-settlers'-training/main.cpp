#include <iostream>

using namespace std;

int main() {
  int n, k, a[100], last, ans = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  last = n - 1;
  while (a[last] == k) last--;
  while (last >= 0) {
    if (last == 0) {
      ans += k - a[last];
      break;
    }
    for (int i = 0; i < n - 1; i++) {
      if (a[i] != a[i + 1]) a[i]++;
    }
    if (a[last] < k) {
      a[last]++;
    }
    if (a[last] == k) last--;
    ans++;
  }
  cout << ans;
  return 0;
}
