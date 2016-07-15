#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[2400] = {}, ans = 0;
  cin >> n;
  while (n--) {
    int h, m;
    cin >> h >> m;
    a[h * 100 + m]++;
  }
  for (int i = 0; i < 2400; i++) {
    ans = max(ans, a[i]);
  }
  cout << ans;
  return 0;
}
