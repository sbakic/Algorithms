#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cout << 2 * n / 3 + ((n - 1) % 3 == 0 ? 1 : 0);
  return 0;
}
