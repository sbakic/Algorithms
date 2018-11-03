#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int t, k, n, a[101] = {}, ans_min = 0, ans_max = 0;
  cin >> t >> k;
  while (t--) {
    cin >> s;
    a[s.size()]++;
  }
  cin >> s;
  n = s.size();
  for (int i = 1; i < 101; i++) {
    if (a[i] > 0 && i < n) ans_min += a[i];
    if (a[i] > 0 && i <= n) ans_max += a[i];
  }
  ans_max--;
  ans_min += (ans_min / k) * 5;
  ans_min += (ans_max / k) * 5;
  cout << ans_min + 1 << " " << ans_max + 1;
  return 0;
}
