#include <iostream>

using namespace std;

int main() {
  int n, day = 1, a[50][50] = {};
  cin >> n;
  while (day <= n * n) {
    int h, v;
    cin >> h >> v;
    if (a[h - 1][v - 1] == 0) {
      for (int i = 0; i < n; i++) {
        a[i][v - 1] = 1;
      }
      for (int i = 0; i < n; i++) {
        a[h - 1][i] = 1;
      }
      cout << day << '\n';
    }
    day++;
  }
  return 0;
}
