#include <iostream>

using namespace std;

int main() {
  int n, a, b, k;
  cin >> n >> a >> b;
  if (b < 0) {
    k = (n + a + b % n) % n;
  }
  else {
    k = (a + b % n) % n;
  }
  cout << (k == 0 ? n : k);
  return 0;
}
