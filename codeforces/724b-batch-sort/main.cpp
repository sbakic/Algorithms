#include <bits/stdc++.h>

using namespace std;

bool check(int b[20][20], int n, int m) {
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < m; j++) {
      if (b[i][j] != j + 1) count++;
    }
    if (count > 2) return false;
  }
  return true;
}

bool do_swap(int a[20][20], int n, int m, int x, int y) {
  int b[20][20];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      b[i][j] = a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    swap(b[i][x], b[i][y]);
  }
  return check(b, n, m);
}

int main() {
  int n, m, a[20][20];
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }
  if (check(a, n, m)) {
    cout << "YES";
    return 0;
  }
  for (int i = 0; i < m - 1; i++) {
    for (int j = i + 1; j < m; j++) {
      if (do_swap(a, n, m, i, j)) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}
