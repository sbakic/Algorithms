#include <iostream>

using namespace std;

int main() {
  int n, a[30][30], count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int col = 0, row = 0;
      for (int k = 0; k < n; k++) {
        col += a[k][j];
      }
      for (int l = 0; l < n; l++) {
        row += a[i][l];
      }
      if (col > row) count++;
    }
  }
  cout << count;
  return 0;
}
