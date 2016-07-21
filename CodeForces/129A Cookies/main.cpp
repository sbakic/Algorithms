#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100], even = 0, odd = 0, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    if (a[i] % 2 == 0) even++;
    else odd++;
  }
  if (sum % 2 == 0) cout << even;
  else cout << odd;
  return 0;
}
