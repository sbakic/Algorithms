#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100], first = -1001, last = 1001;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    first = max(first, a[i]);
    last = min(last, a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == first) {
      a[i] = -1001;
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == last) {
      a[i] = 1001;
      break;
    }
  }
  sort(a, a + n);
  cout << first << " ";
  for (int i = 1; i < n - 1; i++) {
    cout << a[i] << " ";
  }
  cout << last;
  return 0;
}
