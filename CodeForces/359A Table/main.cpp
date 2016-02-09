#include <iostream>

using namespace std;

bool check(int i, int j, int n, int m) {
  return (i == 0 && j == 0 || i == 0 && j == m - 1 || j == 0 && i == n - 1 || i == n - 1 && j == m - 1);
}

int main() {
  int n, m, a[50][50];
  bool border = false;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 0) continue;
      if (!check(i, j, n, m) && (j == 0 || j == m - 1 || i == 0 || i == n - 1)) border = true;
    }
  }
  if (border) cout << "2";
  else cout << "4";
  return 0;
}
