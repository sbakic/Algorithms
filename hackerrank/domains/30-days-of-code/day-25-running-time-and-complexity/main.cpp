#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  if (n == 1) {
    return false;
  }
  int d = 2;
  while (d * d <= n) {
    if (n % d == 0) {
      return false;
    }
    d++;
  }
  return true;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (isPrime(n)) cout << "Prime" << '\n';
    else cout << "Not prime" << '\n';
  }
  return 0;
}
