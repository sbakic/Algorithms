#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b;
  double c;
  cin >> c >> a >> b;
  cout << "The total meal cost is " << round(c + c * a / 100 + c * b / 100) << " dollars.";
  return 0;
}
