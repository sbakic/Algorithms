#include <iostream>

using namespace std;

int main() {
  int n, a[100000], index = -1;
  bool first = false;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (a[i] > a[i + 1]) {
      if (first) {
        cout << "-1";
        return 0;
      }
      first = true;
      index = i;
    }
  }
  if (a[n - 1] > a[0] && first) {
    cout << "-1";
    return 0;
  }
  !first ? cout << "0" : cout << n - 1 - index;
  return 0;
}
