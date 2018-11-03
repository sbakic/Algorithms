#include <iostream>

using namespace std;

int main() {
  int n, m, a[100][200], ans = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 2 * m; j += 2) {
      if (a[i][j] || a[i][j + 1]) ans++;
    }
  }
  cout << ans;
  return 0;
}
