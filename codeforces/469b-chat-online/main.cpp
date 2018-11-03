#include <iostream>

using namespace std;

int main() {
  int p, q, l, r, a[50], b[50], c[50], d[50], count = 0;
  cin >> p >> q >> l >> r;
  for (int i = 0; i < p; i++) {
    cin >> a[i] >> b[i];
  }
  for (int i = 0; i < q; i++) {
    cin >> c[i] >> d[i];
  }
  for (int i = l; i <= r; i++) {
    bool found = false;
    for (int j = 0; j < p; j++) {
      for (int k = 0; k < q; k++) {
        if (a[j] <= d[k] + i && c[k] + i <= b[j]) {
          found = true;
          break;
        }
      }
      if (found) break;
    }
    if (found) count++;
  }
  cout << count;
  return 0;
}
