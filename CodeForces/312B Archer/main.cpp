#include <bits/stdc++.h>

using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << fixed << setprecision(6) << (a / b) / (1 - (1 - c / d) * (1 - a / b));
  return 0;
}
