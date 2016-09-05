#include <bits/stdc++.h>

using namespace std;

bool check(char c[][101], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (c[i][j] != 'W' && c[i][j] != 'B' && c[i][j] != 'G') return false;
    }
  }
  return true;
}

int main() {
  char c[101][101];
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> c[i][j];
    }
  }
  if (check(c, n, m)) cout << "#Black&White";
  else cout << "#Color";
  return 0;
}
