#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[201] = {}, l = 0, r = 0;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    a[x]++;
  }
  while (a[200] > 0) {
    if (a[200]-- > 0) l += 200;
    if (a[200]-- > 0) r += 200;
  }
  while (a[100]--) {
    if (l >= r) r += 100;
    else l += 100;
  }
  if (l == r) cout << "YES";
  else cout << "NO";
  return 0;
}
