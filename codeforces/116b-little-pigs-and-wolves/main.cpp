#include <iostream>

using namespace std;

int X[] = {-1, 0, 0, 1};
int Y[] = {0, -1, 1, 0};

int main() {
  int n, m, count = 0;
  char a[10][10];
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (a[i][j] == 'W') {
        for (int k = 0; k < 4; k++) {
          int x = i + X[k];
          int y = j + Y[k];
          if (x >= 0 && x < n && y >= 0 && y < m && a[x][y] == 'P') {
            count++;
            break;
          }
        }
      }
    }
  }
  cout << count;
  return 0;
}
