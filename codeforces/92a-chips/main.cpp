#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, curr = 0;
  cin >> n >> m;
  while (m) {
    curr = ++curr % (n + 1);
    if (m >= curr) m -= curr;
    else {
      cout << m;
      return 0;
    }
  }
  cout << "0";
  return 0;
}
