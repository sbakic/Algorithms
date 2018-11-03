#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[1000], ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] == 1) ans++;
  }
  if ((n > 1 && n - 1 == ans) || (n == 1 && ans == 1)) cout << "YES";
  else cout << "NO";
  return 0;
}
