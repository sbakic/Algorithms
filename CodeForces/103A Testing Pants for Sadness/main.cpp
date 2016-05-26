#include <bits/stdc++.h>

using namespace std;

int main() {
  long long ans = 0;
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    ans += (long long) (i + 1) * a[i] - i;
  }
  cout << ans;
  return 0;
}
