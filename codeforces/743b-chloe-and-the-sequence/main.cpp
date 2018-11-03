#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, k;
  cin >> n >> k;
  for (long long i = 1; i <= n; i++) {
    if ((k - (1LL << (i - 1))) % (1LL << i) == 0) {
      cout << i;
      break;
    }
  }
  return 0;
}
