#include <bits/stdc++.h>

using namespace std;

int main() {
  bool b[901] = {};
  int n, k, a[30];
  cin >> n >> k;
  for (int i = 0; i < k; i++) {
    cin >> a[i];
    b[a[i]] = true;
  }
  for (int i = 0; i < k; i++) {
    cout << a[i] << " ";
    for (int j = 0; j < n - 1; j++) {
      for (int k = 1; k <= n * k; k++) {
        if (!b[k]) {
          b[k] = true;
          cout << k << " ";
          break;
        }
      }
    }
    cout << '\n';
  }
  return 0;
}
