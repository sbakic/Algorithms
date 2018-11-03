#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  double a = (n * 5 - k) * 1.0 / n;
  if (a <= 2) cout << 0;
  else if (a == 3) cout << n;
  else cout << n * (a - 2);
  return 0;
}
