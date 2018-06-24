#include <bits/stdc++.h>

using namespace std;

int main() {
  char s[500][500];
  int n, m, L = 501, R = -1, U = 501, D = -1;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i][j] == 'X') {
        L = min(L, j);
        R = max(R, j);
        U = min(U, i);
        D = max(D, i);
      }
    }
  }
  for (int i = U; i <= D; i++) {
    for (int j = L; j <= R; j++) {
      if (s[i][j] == '.') {
        cout << "NO";
        return 0;
      }
    }
  }
  cout << "YES";
  return 0;
}
