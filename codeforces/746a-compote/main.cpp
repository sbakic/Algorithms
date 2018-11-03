#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (b < 2 || c < 4) {
    cout << "0";
    return 0;
  }
  for (int i = 1; i <= a + 1; i++) {
    if (2 * i > b || 4 * i > c) {
      cout << (i - 1) + 2 * (i - 1) + 4 * (i - 1);
      return 0;
    }
  }
  cout << a + 2 * a + 4 * a;
  return 0;
}
