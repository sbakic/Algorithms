#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, d, a[100][100], b[100000], count = 0;
  bool check = false;
  cin >> n >> m >> d;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
      if (j > 0 && a[i][j] % d != a[i][j - 1] % d) check = true;
      b[i * m + j] = a[i][j];
    }
  }
  if (check) {
    cout << "-1";
    return 0;
  }
  sort(b, b + n * m);
  for (int i = 0; i < n * m; i++) {
    count += abs(b[(n * m - 1) / 2] - b[i]) / d;
  }
  cout << count;
  return 0;
}
