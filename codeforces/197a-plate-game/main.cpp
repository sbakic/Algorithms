#include <iostream>

using namespace std;

int main() {
  int a, b, r;
  cin >> a >> b >> r;
  (2 * r > min(a, b)) ? cout << "Second" : cout << "First";
  return 0;
}
