#include <iostream>

using namespace std;

int main() {
  int n, x, a[100], b[100], c[100], j = 0, k = 0, l = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x > 0) a[j++] = x;
    if (x < 0) b[k++] = x;
    if (x == 0) c[l++] = x;
  }
  if (j == 0 && k % 2 == 0) {
    cout << k - 3 << " ";
    for (int i = 0; i < k - 3; i++) {
      i == k - 4 ? cout << b[i] << "\n" : cout << b[i] << " ";
    }
    cout << 2 << " ";
    for (int i = k - 3; i < k - 1; i++) {
       i == k - 2 ? cout << b[i] << "\n" : cout << b[i] << " ";
    }
    cout << 2 << " ";
    for (int i = 0; i < l; i++) {
      cout << "0 ";
    }
    cout << b[k - 1];
  }
  else if (j == 0) {
    cout << k - 2 << " ";
    for (int i = 0; i < k - 2; i++) {
      i == k - 3 ? cout << b[i] << "\n" : cout << b[i] << " ";
    }
    cout << 2 << " ";
    for (int i = k - 2; i < k; i++) {
       i == k - 1 ? cout << b[i] << "\n" : cout << b[i] << " ";
    }
    cout << l << " ";
    for (int i = 0; i < l; i++) {
      cout << "0 ";
    }
  }
  else if (k % 2 == 0) {
    cout << k  - 1 << " ";
    for (int i = 0; i < k - 1; i++) {
      i == k - 2 ? cout << b[i] << "\n" : cout << b[i] << " ";
    }
    cout << j << " ";
    for (int i = 0; i < j; i++) {
      i == j - 1 ? cout << a[i] << "\n" : cout << a[i] << " ";
    }
    cout << l + 1 << " ";
    for (int i = 0; i < l; i++) {
      cout << "0 ";
    }
    cout << b[k - 1];
  }
  else {
    cout << k << " ";
    for (int i = 0; i < k; i++) {
      i == k - 1 ? cout << b[i] << "\n" : cout << b[i] << " ";
    }
    cout << j << " ";
    for (int i = 0; i < j; i++) {
      i == j - 1 ? cout << a[i] << "\n" : cout << a[i] << " ";
    }
    cout << l << " ";
    for (int i = 0; i < l; i++) {
      cout << "0 ";
    }
  }
  return 0;
}
