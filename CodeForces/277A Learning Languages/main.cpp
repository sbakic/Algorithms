#include <bits/stdc++.h>

using namespace std;

int a[101], r[101];

int find(int i) {
  return a[i] == i ? i : a[i] = find(a[i]);
}

void merge(int x, int y) {
  int X = find(x), Y = find(y);
  if (r[X] > r[Y]) a[Y] = X;
  else a[X] = Y;
  if (r[X] == r[Y]) r[Y]++;
}

int main() {
  int n, m, ans = 0, u[101] = {};
  cin >> n >> m;
  for (int i = 1; i <= m; i++) {
    a[i] = i;
  }
  for (int i = 0; i < n; i++) {
    int k, b[100];
    cin >> k;
    if (k == 0) ans++;
    for (int i = 0; i < k; i++) {
      cin >> b[i];
      u[b[i]]++;
    }
    for (int i = 1; i < k; i++) {
      merge(b[i], b[i - 1]);
    }
  }
  if (ans == n) ans++;
  for (int i = 1; i <= m; i++) {
    if (u[i] && a[i] == i) ans++;
  }
  cout << ans - 1;
  return 0;
}
