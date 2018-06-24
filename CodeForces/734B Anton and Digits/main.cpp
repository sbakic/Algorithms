#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d;
  e = min(a, min(c, d));
  a -= e;
  cout << 32 * min(b, max(a, 0)) + 256 * e;
  return 0;
}
