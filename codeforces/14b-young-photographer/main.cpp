#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[1001] = {}, minIndex = 1001, maxIndex = -1;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    while (x != y) {
      a[x]++;
      if (x < y) x++;
      if (x > y) x--;
    }
    a[y]++;
  }
  for (int i = 0; i < 1001; i++) {
    if (a[i] == n) {
      minIndex = min(minIndex, i);
      maxIndex = max(maxIndex, i);
    }
  }
  if (minIndex != 1001 && maxIndex != -1) {
    if (a[k] == n) cout << 0;
    else cout << min(abs(k - minIndex), abs(k - maxIndex));
  }
  else cout << "-1";
  return 0;
}
