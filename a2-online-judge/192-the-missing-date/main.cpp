#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << a + c + (b - 1 + d) / 12 << " " << (b + d > 12 ? b + d - 12 : b + d) << '\n';
  }
  return 0;
}
