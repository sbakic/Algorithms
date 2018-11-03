#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, a[12], n = 12, curr = 0;
  cin >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n, greater<int>());
  for (int i = 0; i < n; i++) {
    curr += a[i];
    if (curr >= k && k > 0) {
      cout << i + 1;
      return 0;
    }
  }
  if (k == 0) cout << "0";
  else cout << "-1";
  return 0;
}
