#include <bits/stdc++.h>

using namespace std;

int make(int n) {
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
    int n, k, a[1000], sum = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      a[i] = make(a[i]);
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < k; i++) {
      sum += a[i];
    }
    cout << sum << '\n';
  }
  return 0;
}
