#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, a[3000];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    if (a[i] != i + 1) {
      cout << i + 1;
      return 0;
    }
  }
  cout << a[n - 1] + 1;
  return 0;
}
