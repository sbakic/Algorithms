#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m, k, a[50];
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if (k >= m) {
    cout << "0";
    return 0;
  }
  sort(a, a + n, std::greater<int>());
  for (int i = 0; i < n; i++) {
    k = --k + a[i];
    if (k >= m) {
      cout << i + 1;
      return 0;
    }
  }
  cout << "-1";
  return 0;
}
