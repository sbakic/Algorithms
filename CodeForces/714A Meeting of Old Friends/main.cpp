#include <bits/stdc++.h>

using namespace std;

int main() {
  long long a, b, c, d, k, ans = 0;
  cin >> a >> b >> c >> d >> k;
  if (c < a && d >= a && b >= d) {
    ans += d - a + 1;
    if (k >= a && k <= d) ans--;
  }
  if (c >= a && d >= a && b >= d) {
    ans += d - c + 1;
    if (k >= c && k <= d) ans--;
  }
  if (c >= a && b >= c && d > b) {
    ans += b - c + 1;
    if (k >= c && k <= b) ans--;
  }
  if (a > c && b < d) {
    ans += b - a + 1;
    if (k >= a && k <= b) ans--;
  }
  cout << ans;
  return 0;
}
