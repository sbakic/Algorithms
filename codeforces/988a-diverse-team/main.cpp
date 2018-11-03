#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[100], b[101] = {};
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n && k; i++) {
    if (!b[a[i]]) {
      b[a[i]] = i + 1;
      k--;
    }
  }
  if (!k) {
    sort(b, b + 101);
    cout << "YES" << endl;
    for (int i = 0; i < 101; i++) {
      if (b[i]) {
        cout << b[i] << " ";
      }
    }
  } else {
    cout << "NO";
  }
  return 0;
}
