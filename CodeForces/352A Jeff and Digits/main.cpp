#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[6] = {};
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    a[x]++;
  }
  a[5] = a[5] / 9 * 9;
  if (a[5] == 0) {
    if (a[0] > 0) cout << "0";
    else cout << "-1";
    return 0;
  }
  if (a[0] > 0) {
    while (a[5]--) cout << "5";
    while (a[0]--) cout << "0";
  }
  else cout << "-1";
  return 0;
}
