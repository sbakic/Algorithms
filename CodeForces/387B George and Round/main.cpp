#include <iostream>

using namespace std;

int main() {
  int n, m, a[3000], b[3000], count = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  for (int i = 0, j = 0; i < n; i++, j++) {
    while (a[i] > b[j] && j < m) j++;
    if (j == m) {
      count += n - i;
    }
  }
  cout << count;
  return 0;
}
