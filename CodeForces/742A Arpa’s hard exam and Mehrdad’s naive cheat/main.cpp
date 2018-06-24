#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[] = {6, 8, 4, 2};
  cin >> n;
  if (n == 0) cout << 1;
  else cout << a[n % 4];
  return 0;
}
