#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a, b, curr = 1e6 + 1;
  cin >> n;
  for (int i = 1; i * i <= n; i++) {
    if (n % i == 0) {
      if (n / i - i < curr) {
        a = i;
        b = n / i;
        curr = b - a;
      }
    }
  }
  cout << a << " " << b;
  return 0;
}
