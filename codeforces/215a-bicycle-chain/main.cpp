#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[50], b[50], count = 0, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (b[j] % a[i] == 0) {
        int curr = b[j] / a[i];
        if (curr > ans) {
          ans = curr;
          count = 1;
        }
        else if (curr == ans) count++;
      }
    }
  }
  cout << count;
  return 0;
}
