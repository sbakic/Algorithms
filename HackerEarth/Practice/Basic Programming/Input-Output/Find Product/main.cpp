#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, mod = 1e9 + 7;
  long long ans = 1;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    ans = ans * a % mod;
  }
  cout << ans;
  return 0;
}
