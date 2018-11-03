#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, a[1000];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n);
  int j = 0;
  while (j < n) {
    int minA = a[j];
    for (int i = 0; i < n; i++) a[i] -= minA;
    cout << n - j << '\n';
    for (int i = j; i < n; i++) if (a[i] <= 0) j++;
  }
  return 0;
}
