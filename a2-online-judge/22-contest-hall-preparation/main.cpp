#include <iostream>

using namespace std;

int n, m, a[100][100];
int X[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
  int t;
  cin >> t;
  while (t--) {
    int b[101] = {}, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        cin >> a[i][j];
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        for (int k = 0; k < 8; k++) {
          int x = i + X[k];
          int y = j + Y[k];
          if (x >= 0 && x < n && y >= 0 && y < m && a[i][j] == a[x][y]) b[a[i][j]]++;
        }
      }
    }
    for (int i = 0; i < 101; i++) {
      if (b[i] > 0) count++;
    }
    cout << count << '\n';
  }
  return 0;
}
