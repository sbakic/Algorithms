#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[8] = {};
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x]++;
  }
  if (a[5] > 0 || a[7] > 0 || a[4] + a[6] != n / 3 || a[2] + a[3] != n / 3 || a[1] != n / 3 || (a[3] == n / 3 && a[4] == n / 3) || (a[4] > a[2] && a[3] > a[6])) cout << "-1";
  else {
    while (n--) {
      if (a[2] > 0 && a[4] > 0) {
        cout << "1 2 4" << '\n';
        a[2]--, a[4]--;
        continue;
      }
      if (a[2] > 0 && a[6] > 0) {
        cout << "1 2 6" << '\n';
        a[2]--, a[6]--;
        continue;
      }
      if (a[3] > 0 && a[6] > 0) {
        cout << "1 3 6" << '\n';
        a[3]--, a[6]--;
        continue;
      }
    }
  }
  return 0;
}
