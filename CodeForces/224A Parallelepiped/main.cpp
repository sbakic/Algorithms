#include <iostream>
#include <math.h>

using namespace std;

int main() {
  double p1, p2, p3;
  cin >> p1 >> p2 >> p3;
  double a = sqrt(p1 * p3 / p2);
  double b = sqrt(p2 * p1 / p3);
  double c = sqrt(p3 * p2 / p1);
  cout << 4 *(a + b + c);
  return 0;
}
