#include <bits/stdc++.h>

using namespace std;

int ones(long long n) {
  int ans = 0;
  while (n) {
    n &= (n - 1);
    ans++;
  }
  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long m, p;
    cin >> m >> p;
    cout << ones(m ^ p) << '\n';
  }
  return 0;
}
