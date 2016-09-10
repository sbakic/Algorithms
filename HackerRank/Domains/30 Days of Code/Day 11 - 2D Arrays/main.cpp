#include <bits/stdc++.h>

using namespace std;

int N = 6;
int X[] = {-1, -1, -1, 0, 1, 1, 1};
int Y[] = {-1, 0, 1, 0, -1, 0, 1};

int main() {
  int a[N][N], ans = -1e9;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      int curr = 0;
      for (int k = 0; k < 7; k++) {
        int x = i + X[k], y = j + Y[k];
        if (x >= 0 && x < N && y >= 0 && y < N) curr += a[x][y];
        else {
          curr = -1e9;
          break;
        }
      }
      ans = max(ans, curr);
    }
  }
  cout << ans;
  return 0;
}
