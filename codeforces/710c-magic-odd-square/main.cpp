#include <bits/stdc++.h>

using namespace std;

int main() {
  bool found = false, F = false;
  int n, odd = 1, even = 2;
  cin >> n;
  for (int i = 0, k = 1, m = n / 2; i < n; i++) {
    int M = m;
    while (M--) {
      cout << even << ' ';
      even += 2;
    }
    int K = k;
    while (K--) {
      cout << odd << ' ';
      odd += 2;
    }
    M = m;
    while (M--) {
      cout << even << ' ';
      even += 2;
    }
    if (k == n) F = true;
    if (!F) k += 2;
    else k -= 2;
    if (m == 0) found = true;
    if (found) m++;
    else m--;
    cout << '\n';
  }
  return 0;
}
