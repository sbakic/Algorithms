#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[1000][1000], ans = 0;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < n; i++) {
    bool found = false;
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 1) found = true;
      if (a[i][j] == 0 && found) ans++;
    }
  }
  for (int i = 0; i < n; i++) {
    bool found = false;
    for (int j = m - 1; j >= 0; j--) {
      if (a[i][j] == 1) found = true;
      if (a[i][j] == 0 && found) ans++;
    }
  }
  for (int j = 0; j < m; j++) {
    bool found = false;
    for (int i = 0; i < n; i++) {
      if (a[i][j] == 1) found = true;
      if (a[i][j] == 0 && found) ans++;
    }
  }
  for (int j = m - 1; j >= 0; j--) {
    bool found = false;
    for (int i = n - 1; i >= 0; i--) {
      if (a[i][j] == 1) found = true;
      if (a[i][j] == 0 && found) ans++;
    }
  }
  printf("%d", ans);
  return 0;
}
