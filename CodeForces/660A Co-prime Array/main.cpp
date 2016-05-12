#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
  return b == 0 ? a : gcd(b, a % b);
}

int main() {
  int n, a[2000], k = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n + k - 1; i++) {
    if (gcd(a[i], a[i + 1]) > 1) {
      k++;
      for (int j = n + k - 2; j >= i + 1; j--) {
        a[j + 1] = a[j];
      }
      a[i + 1] = 1;
      i++;
    }
  }
  cout << k << endl;
  for (int i = 0; i < n + k; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
