#include <iostream>

using namespace std;

int main() {
  int m, a[5][5] = {};
  cin >> m;
  while (m--) {
    int x, y;
    cin >> x >> y;
    a[x - 1][y - 1] = 1;
    a[y - 1][x - 1] = 1;
  }
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      for (int k = j + 1; k < 5; k++) {
        if ((a[i][j] && a[j][k] && a[k][i]) || (!a[i][j] && !a[j][k] && !a[k][i])) {
          cout << "WIN";
          return 0;
        }
      }
    }
  }
  cout << "FAIL";
  return 0;
}
