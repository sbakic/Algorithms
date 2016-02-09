#include <iostream>

using namespace std;

bool a[40001][4001];

int main() {
  int n, m, b[4001] = {}, count = 1000000000;
  cin >> n >> m;
  while (m--) {
    int x, y;
    cin >> x >> y;
    a[x][y] = a[y][x] = true;
    b[x]++;
    b[y]++;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = i + 1; j <= n; j++) {
      if (a[i][j]) {
        for (int k = j + 1; k <= n; k++) {
          if (a[i][k] && a[j][k]) count = min(count, b[i] + b[j] + b[k]);
        }
      }
    }
  }
  cout << (count == 1000000000 ? -1 : count - 6);
  return 0;
}
