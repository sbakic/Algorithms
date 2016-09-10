#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, curr = 0, ans = 0;
  cin >> n;
  while (n) {
    int digit = n % 2;
    if (digit == 1) curr++;
    else {
      ans = max(ans, curr);
      curr = 0;
    }
    n /= 2;
  }
  cout << max(ans, curr);
  return 0;
}
