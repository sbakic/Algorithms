#include <iostream>

using namespace std;

int main() {
  bool a[100] = {};
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    for (int j = 0; j < x; j++) {
      int y;
      cin >> y;
      a[y - 1] = true;
    }
  }
  for (int i = 0; i < m; i++) {
    if (!a[i]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
