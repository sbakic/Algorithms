#include <iostream>

using namespace std;

int main() {
  int n, j = 16, i = 1 << 16;
  cin >> n;
  while (i) {
    if (n & i) cout << j + 1 << " ";
    i >>= 1;
    j--;
  }
  return 0;
}
