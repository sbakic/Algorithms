#include <bits/stdc++.h>

using namespace std;

int divisiors(int n) {
  int i = 1, ans = 0;
  while (i * i < n) {
    if (n % i == 0) ans += 2;
    i++;
  }
  if (i * i == n) ans++;
  return ans;
}

int main() {
  set<int> s;
  int a, b, c, k, d[1000001] = {}, ans = 0, mod = 2 << 30;
  cin >> a >> b >> c;
  k = max(a, max(b, c));
  k = k * k * k;
  for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      for (int k = 1; k <= c; k++) {
        s.insert(i * j * k);
      }
    }
  }
  for (set<int>::iterator i = s.begin(); i != s.end(); i++) {
    d[*i] = divisiors(*i);
  }
   for (int i = 1; i <= a; i++) {
    for (int j = 1; j <= b; j++) {
      for (int k = 1; k <= c; k++) {
        ans += d[i * j * k] % mod;
      }
    }
  }
  cout << ans;
  return 0;
}
