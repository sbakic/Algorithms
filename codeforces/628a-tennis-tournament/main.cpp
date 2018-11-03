#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, b, p, B = 0, P;
  cin >> n >> b >> p;
  P = n * p;
  while (n > 1) {
    int curr = n / 2;
    B += curr * 2 * b + curr;
    n = n / 2 + n % 2;
  }
  cout << B << " " << P;
  return 0;
}
