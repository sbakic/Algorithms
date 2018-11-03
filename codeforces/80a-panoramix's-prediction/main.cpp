#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n) {
  int i = 2;
  while (i * i <= n) {
    if (n % i == 0) return false;
    i++;
  }
  return true;
}

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = n + 1; i <= m; i++) {
    if (isPrime(i)) {
      if (i == m) cout << "YES";
      else cout << "NO";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
