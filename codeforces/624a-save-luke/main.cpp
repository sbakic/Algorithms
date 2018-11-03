#include <bits/stdc++.h>

using namespace std;

int main() {
  int d, l, v1, v2;
  cin >> d >> l >> v1 >> v2;
  cout << setprecision(20) << 1 / (v1 / (v1 * (l - d) * 1. / (v1 + v2)));
  return 0;
}
