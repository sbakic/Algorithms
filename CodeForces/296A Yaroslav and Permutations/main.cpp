#include <iostream>

using namespace std;

int main() {
  int n, a[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == a[i + 1]) {
      for (int j = i + 2; j < n; j++) {
        if (a[i] != a[j]) swap(a[i + 1], a[j]);
      }
    }
  }
  for (int i = n - 1; i >= 0; i--) {
    if (a[i] == a[i - 1]) {
      for (int j = i - 2; j >= 0; j--) {
        if (a[i] != a[j]) swap(a[i - 1], a[j]);
      }
    }
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] == a[i + 1]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
