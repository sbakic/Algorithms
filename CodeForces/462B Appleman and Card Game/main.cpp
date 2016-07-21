#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, k, a[26] = {};
  long long ans = 0;
  cin >> n >> k >> s;
  for (int i = 0; i < n; i++) {
    a[s[i] - 'A']++;
  }
  while (k > 0) {
    int curr = 0, j = -1;
    for (int i = 0; i < 26; i++) {
      if (a[i] > curr) {
        curr = a[i];
        j = i;
      }
    }
    a[j] = 0;
    if (k >= curr) ans += (long long) curr * curr;
    else ans += (long long) k * k;
    k -= curr;
  }
  cout << ans;
  return 0;
}
