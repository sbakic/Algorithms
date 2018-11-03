#include <iostream>

using namespace std;

int main() {
  int n, a[100000] = {}, curr = 1;
  long long ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i < n; i++) {
    if (a[i] != a[i - 1]) {
      ans += (long long) curr * (curr - 1) / 2;
      curr = 1;
    }
    else curr++;
    if (i == n - 1 && curr > 1) ans += (long long) curr * (curr - 1) / 2;
  }
  cout << ans + n;
  return 0;
}
