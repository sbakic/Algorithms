#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a[100001], n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  cout << (n == 2 ? 0 : min(a[n - 1] - a[1], a[n - 2] - a[0]));
  return 0;
}
