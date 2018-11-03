#include <bits/stdc++.h>

using namespace std;

int main() {
  int x, y, n, a = 0, b = 1;
  cin >> x >> y >> n;
  for (int i = 1; i <= n; i++) {
    long long curr = abs((long long)x * i * b - (long long)a * i * y);
    int low = (double)x * i / y;
    int up = low + 1;
    long long lower = abs((long long)low * b * y - (long long)x * i * b);
    long long upper = abs((long long)up * b * y - (long long)x * i * b);
    if(lower < curr) {
      curr = lower;
      a = low;
      b = i;
    }
    if(upper < curr) {
      curr = upper;
      a = up;
      b = i;
    }
  }
  cout << a << "/" << b;
  return 0;
}
