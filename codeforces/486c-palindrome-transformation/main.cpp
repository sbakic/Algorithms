#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, p, ll = 1e9, rl = -1e9, lr = 1e9, rr = -1e9, flip = 0, pathL, pathR;
  cin >> n >> p >> s;
  for (int i = 0; i < n / 2; i++) {
    if (s[i] == s[n - 1 - i]) continue;
    flip += min(abs(s[i] - s[n - 1 - i]), min(s[i], s[n - 1 - i]) - 'a' + 'z' - max(s[i], s[n - 1 - i]) + 1);
    ll = min(ll, i + 1);
    rl = max(rl, i + 1);
    lr = min(lr, n - i);
    rr = max(rr, n - i);
  }
  pathL = (ll <= p && p <= rl) ? 2 * min(abs(p - ll), abs(p - rl)) + max(abs(p - ll), abs(p - rl)) : max(abs(p - ll), abs(p - rl));
  pathR = (lr <= p && p <= rr) ? 2 * min(abs(p - lr), abs(p - rr)) + max(abs(p - lr), abs(p - rr)) : max(abs(p - lr), abs(p - rr));
  cout << (flip == 0 ? 0 : min(pathL, pathR) + flip);
  return 0;
}
