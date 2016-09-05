#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  if (n < 3) {
    cout << "-1";
    return 0;
  }
  if (n % 2 == 0) {
    if (n * n % 4 == 0) cout << n * n / 4 - 1 << " " << n * n / 4 + 1;
    else cout << "-1";
  }
  else {
    if ((n * n - 1) % 2 == 0 && (n * n + 1) % 2 == 0) cout << (n * n - 1) / 2 << " " << (n * n + 1) / 2;
    else cout << "-1";
  }
  return 0;
}
