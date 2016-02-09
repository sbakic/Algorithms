#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, x, y, a[100];
    cin >> n >> x >> y;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    if (a[0] == x && a[n - 1] == y) cout << "BOTH\n";
    else if (a[0] == x) cout << "EASY\n";
    else if (a[n - 1] == y) cout << "HARD\n";
    else cout << "OKAY\n";
  }
  return 0;
}
