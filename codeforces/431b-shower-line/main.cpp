#include <bits/stdc++.h>

using namespace std;

int main() {
  int n = 5, a[] = {0, 1, 2, 3, 4}, b[5][5], ans;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }
  ans = b[a[0]][a[1]] + b[a[1]][a[0]] + b[a[2]][a[3]] + b[a[3]][a[2]] + b[a[1]][a[2]] + b[a[2]][a[1]] + b[a[3]][a[4]] + b[a[4]][a[3]] + b[a[2]][a[3]] + b[a[3]][a[2]] + b[a[3]][a[4]] + b[a[4]][a[3]];
  while (next_permutation(a, a + n)) {
    int curr = b[a[0]][a[1]] + b[a[1]][a[0]] + b[a[2]][a[3]] + b[a[3]][a[2]] + b[a[1]][a[2]] + b[a[2]][a[1]] + b[a[3]][a[4]] + b[a[4]][a[3]] + b[a[2]][a[3]] + b[a[3]][a[2]] + b[a[3]][a[4]] + b[a[4]][a[3]];
    ans = max(ans, curr);
  }
  cout << ans;
  return 0;
}
