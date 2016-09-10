#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[600], ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
        ans++;
      }
    }
  }
  cout << "Array is sorted in " << ans << " swaps." << '\n';
  cout << "First Element: " << a[0] << '\n';
  cout << "Last Element: " << a[n - 1];
  return 0;
}
