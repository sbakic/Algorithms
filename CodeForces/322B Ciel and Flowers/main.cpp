#include <bits/stdc++.h>

using namespace std;

int check(int r, int g, int b) {
  if (r < 0 || g < 0 || b < 0) return -1e9;
  return r / 3 + g / 3 + b / 3;
}

int main() {
  int r, g, b;
  cin >> r >> g >> b;
  cout << max(check(r, g, b), max(1 + check(r - 1, g - 1, b - 1), 2 + check(r - 2, g - 2, b - 2)));
  return 0;
}
