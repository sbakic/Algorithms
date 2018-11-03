#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, d, l, right, left, a[100];
  cin >> n >> d >> l;
  right = n / 2;
  left = n - right;
  for (int i = 0; i < n; i++) {
    a[i] = 1;
  }
  if (d <= 0) {
    if (left - d <= right * l) {
      while (right + d < left) {
        for (int i = 1; i < n; i += 2) {
          if (right + d < left) {
            a[i]++;
            d++;
          }
        }
      }
      for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
    }
    else cout << "-1";
  }
  else {
    if (left * l >= right + d) {
      while (right > left - d) {
        for (int i = 0; i < n; i += 2) {
          if (right > left - d) {
            a[i]++;
            left++;
          }
        }
      }
      for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
      }
    }
    else cout << "-1";
  }
  return 0;
}
