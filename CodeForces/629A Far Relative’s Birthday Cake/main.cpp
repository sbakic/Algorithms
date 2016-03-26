#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100] = {}, b[100] = {}, ans = 0;
  char c[101][101];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (c[i][j] == 'C') a[i]++;
      if (c[j][i] == 'C') b[i]++;
    }
  }
  for (int i = 0; i < n; i++) {
    ans += a[i] * (a[i] - 1) / 2;
    ans += b[i] * (b[i] - 1) / 2;
  }
  cout << ans;
  return 0;
}
