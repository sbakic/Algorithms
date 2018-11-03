#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cout << (n % 2 == 1 ? 0 : n % 4 == 0 ? n / 4 - 1: n / 4);
  return 0;
}
