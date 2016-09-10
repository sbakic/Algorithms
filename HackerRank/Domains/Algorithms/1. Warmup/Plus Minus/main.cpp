#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, countPositive = 0, countNegative = 0, countZeros = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (a > 0) countPositive++;
    else if (a < 0) countNegative++;
    else countZeros++;
  }
  cout << fixed << setprecision(3) << countPositive * 1. / n << "\n" << countNegative * 1. / n << "\n" << countZeros * 1. / n;
  return 0;
}
