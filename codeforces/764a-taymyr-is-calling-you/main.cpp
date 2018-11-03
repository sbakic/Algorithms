#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, z, ans = 0;
  cin >> n >> m >> z;
  for (int i = n, j = m; i <= z || j <= z;) {
    if (i == j) {
      ans++;
      i += n;
      j += m;
    }
    else if (i > j) j += m;
    else i += n;
  }
  cout << ans;
  return 0;
}
