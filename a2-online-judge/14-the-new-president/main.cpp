#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int c, v, a[100][101], b[101] = {};
    cin >> c >> v;
    for (int i = 0; i < v; i++) {
      for (int j = 0; j < c; j++) {
        cin >> a[i][j];
      }
    }
    for (int i = 0; i < v; i++) {
      b[a[i][0]]++;
    }
    int first = 0, second = 0;
    for (int i = 0; i <= c; i++) {
      if (b[i] > first) {
        second = first;
        first = b[i];
      }
      else if (b[i] > second) {
        second = b[i];
      }
    }
    int candidate1, candidate2;
    for (int i = 0; i <= c; i++) {
        if (b[i] == first) {
          candidate1 = i;
          b[i] = 0;
          break;
        }
      }
      for (int i = 0; i <= c; i++) {
        if (b[i] == second) {
          candidate2 = i;
          break;
        }
      }
    if (v <= 2 * first) cout << candidate1 << " 1\n";
    else {
      int one = 0, two = 0;
      for (int i = 0; i < v; i++) {
        for (int j = 0; j < c; j++) {
          if (a[i][j] == candidate1) {
            one++;
            break;
          }
          if (a[i][j] == candidate2) {
            two++;
            break;
          }
        }
      }
      if (one > two) cout << candidate1 << " 2\n";
      else cout << candidate2 << " 2\n";
    }
  }
  return 0;
}
