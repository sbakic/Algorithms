#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m, a[50], minDiff = 1000;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  sort(a, a + m);
   if (n == m) {
    cout << a[n - 1] - a[0];
    return 0;
  }
  for (int i = 0; i <= m - n; i++) {
    minDiff = min(minDiff, a[i + n - 1] - a[i]);
  }
  cout << minDiff;
  return 0;
}
