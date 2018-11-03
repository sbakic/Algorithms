#include <bits/stdc++.h>

using namespace std;

int X[] = {-1, 0, 0, 0, 1};
int Y[] = {0, -1, 0, 1, 0};

int main() {
  int a[3][3];
  for (int i = 0 ; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      int curr = 0;
      for (int k = 0; k < 5; k++) {
        int x = i + X[k], y = j + Y[k];
        if (x >= 0 && x < 3 && y >= 0 && y < 3) curr += a[x][y];
      }
      if (curr % 2 == 0) cout << "1";
      else cout << "0";
    }
    cout << "\n";
  }
  return 0;
}
