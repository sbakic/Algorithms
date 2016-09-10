#include <iostream>

using namespace std;

int X[] = {-1, -1, -1, 1, 1, 1};
int Y[] = {-1, 0, 1, -1, 0, 1};

int main() {
  int n = 6, a[6][6];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  int maxSum = -63;
  for (int i = 1; i < n - 1; i++) {
    for (int j = 1; j < n - 1; j++) {
      int sum = a[i][j];
      for (int k = 0; k < 6; k++) {
        int x = i + X[k];
        int y = j + Y[k];
        if (x >= 0 && x < n && y >= 0 && y < n) sum += a[x][y];
      }
      maxSum = max(maxSum, sum);
    }
  }
	cout << maxSum;
  return 0;
}
