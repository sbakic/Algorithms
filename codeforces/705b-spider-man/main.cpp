#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000];
  long long ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    ans += a[i] - 1;
    cout << (ans % 2 == 0 ? "2" : "1") << '\n';
  }
  return 0;
}
