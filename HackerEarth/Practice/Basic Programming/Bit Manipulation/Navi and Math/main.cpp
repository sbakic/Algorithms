#include <bits/stdc++.h>

using namespace std;

long long power(long long base, long long exponent, long long modulus) {
  long long ans = 1;
  while (exponent) {
    if (exponent % 2 == 1) ans = (ans * base) % modulus;
    exponent >>= 1;
    base = (base * base) % modulus;
  }
  return ans;
}

int main() {
  int t;
  cin >> t;
  for (int k = 1; k <= t; k++) {
    int n, a[16], mod = 1e9 + 7;
    long long ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (int i = 0; i < (1 << n); i++) {
      long long mul = 1, sum = 0;
      int count = 0;
      for (int j = 0; j < n; j++) {
        if ((i & (1 << j)) > 0) {
          mul = (mul * a[j]) % mod;
          sum = (sum + a[j]) % mod;
          count++;
        }
      }
      if (count > 1) {
        long long int curr = power(sum, mod - 2, mod);
        curr = (curr * mul) % mod;
        ans = max(ans, curr);
      }
    }
    cout << "Case #" << k << ": " << ans << '\n';
  }
  return 0;
}
