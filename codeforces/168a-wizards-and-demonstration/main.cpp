#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  double i = y / 100., j = i * n;
  cout << max((int) ceil(j) - x, 0);
  return 0;
}
