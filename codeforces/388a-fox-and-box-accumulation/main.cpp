#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[101], ans = 0, used = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  while (used < n) {
    int h = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] >= h) {
        a[i] = -1;
        h++;
        used++;
      }
    }
    ans++;
  }
  cout << ans;
  return 0;
}
