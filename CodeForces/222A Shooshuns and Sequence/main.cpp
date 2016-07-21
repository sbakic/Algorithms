#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[100000];
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = k - 1; i < n - 1; i++) {
    if (a[i] != a[i + 1]) {
      cout << "-1";
      return 0;
    }
  }
  for (int i = k - 1; i > 0; i--) {
    if (a[i] != a[i - 1]) {
      cout << i;
      return 0;
    }
  }
  cout << "0";
  return 0;
}
