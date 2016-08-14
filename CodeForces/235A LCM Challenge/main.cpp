#include <bits/stdc++.h>

using namespace std;

long long custom_max(long long a, long long b) {
  return a > b ? a : b;
}
long long gcd(long long a, long long b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main() {
  long long n, a[] = {0, 1, 2, 6, 12}, ans = 0;
  cin >> n;
  if (n < 5) cout << a[n];
  else {
    for (long long i = n - 2; i > 0; i--) {
      long long curr = n * (n - 1) * i / gcd(n * (n - 1), gcd((n - 1) * i, i * n));
      ans = custom_max(ans, curr);
    }
    if (n % 2 == 0) n--;
    cout << custom_max(ans, n * (n - 1) * (n - 2));
  }
  return 0;
}
