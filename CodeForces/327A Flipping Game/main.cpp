#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, ans = 0;
  bool a[100], b[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      for (int k = 0; k < n; k++) {
        b[k] = a[k];
      }
      for (int k = i; k <= j; k++) {
        b[k] = !b[k];
      }
      int curr = 0;
      for (int k = 0; k < n; k++) {
        if (b[k]) curr++;
      }
      ans = max(ans, curr);
    }
  }
  cout << ans;
  return 0;
}
