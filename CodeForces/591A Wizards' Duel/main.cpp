#include <bits/stdc++.h>

using namespace std;

int main() {
  int l, p, q;
  cin >> l >> p >> q;
  cout << fixed << setprecision(4) << (l * 1. / (p + q)) * p;
  return 0;
}
