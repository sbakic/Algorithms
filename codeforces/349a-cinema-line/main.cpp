#include <iostream>

using namespace std;

int main() {
  int n, a[100000], b[3] = {};
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == 25) b[0]++;
    if (a[i] == 50) {
      if (b[0] > 0) b[0]--;
      else {
        cout << "NO";
        return 0;
      }
      b[1]++;
    }
    if (a[i] == 100) {
      if (b[1] > 0 && b[0] > 0) {
        b[1]--;
        b[0]--;
      }
      else if (b[0] > 2) b[0] -= 3;
      else {
        cout << "NO";
        return 0;
      }
      b[2]++;
    }
  }
  cout << "YES";
  return 0;
}
