#include <bits/stdc++.h>

using namespace std;

bool checkW(char c[9][9], int i, int j) {
  for (int k = i; k >= 0; k--) {
    if (c[k][j] == 'B') return false;
  }
  return true;
}

bool checkB(char c[9][9], int i, int j) {
  for (int k = i; k < 9; k++) {
    if (c[k][j] == 'W') return false;
  }
  return true;
}

int main() {
  pair<int, int> a[64] = {}, b[64] = {};
  int n = 0, m = 0, valueA = 8, valueB = -1;
  char c[9][9];
  for (int i = 0; i < 8; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (c[i][j] == 'W') {
        a[n].first = i + 1;
        a[n++].second = j + 1;
      }
      if (c[i][j] == 'B') {
        b[m].first = i + 1;
        b[m++].second = j + 1;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    if (checkW(c, a[i].first - 1, a[i].second - 1)) {
       valueA = min(valueA, a[i].first);
    }
  }
  for (int i = 0; i < m; i++) {
    if (checkB(c, b[i].first - 1, b[i].second - 1)) {
      valueB = max(valueB, b[i].first);
    }
  }
  printf("%c", valueA - 1 <= 8 - valueB ? 'A' : 'B');
  return 0;
}
