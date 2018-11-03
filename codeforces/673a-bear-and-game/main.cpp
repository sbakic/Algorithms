#include <iostream>

using namespace std;

int main() {
  int n, a[91] = {0}, ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    if (a[i] - a[i - 1] <= 15) ans = a[i];
    else {
      ans = a[i - 1] + 15;
      cout << ans;
      return 0;
    }
  }
  cout << min(ans + 15, 90);
  return 0;
}
