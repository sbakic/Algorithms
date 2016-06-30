#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100], b[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(b, b + n);
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      if (b[i] == a[j]) {
        while (j > i) {
          cout << j << " " << j + 1 << '\n';
          swap(a[j - 1], a[j]);
          j--;
        }
        break;
      }
    }
  }
  return 0;
}
