#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100][100], sumD1 = 0, sumD2 = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0, j = n - 1; i < n; i++, j--) {
    sumD1 += a[i][i];
    sumD2 += a[i][j];
  }
  cout << abs(sumD1 - sumD2);
  return 0;
}
