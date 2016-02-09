#include <iostream>
#include <algorithm>

using namespace std;

int main() {
  int n, m, a[3002], count = 1;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  sort(a, a + m);
  if (a[0] == 1 || a[m - 1] == n) {
    cout << "NO";
    return 0;
  }
  for (int i = 0; i < m; i++) {
    if (a[i] + 1 == a[i + 1]) count++;
    else {
      if (count > 2) {
        cout << "NO";
        return 0;
      }
      count = 1;
    }
  }
  cout << "YES";
  return 0;
}
