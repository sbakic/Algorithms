#include <iostream>

using namespace std;

bool check(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    if (a[i] + 1 != a[i + 1]) return false;
  }
  return true;
}

int main() {
  int n, a[1000];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int t = n;
  while (t--) {
    for (int i = 0; i < n; i++) {
      if (i % 2 == 0) a[i] = ++a[i] % n;
      else (a[i] == 0) ? a[i] = n - 1 : a[i]--;
    }
    if (check(a, n)) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}
