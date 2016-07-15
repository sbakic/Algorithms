#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, zeroL = 0, oneL = 0, zeroR = 0, oneR = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;
    if (l == 0) zeroL++;
    else oneL++;
    if (r == 0) zeroR++;
    else oneR++;
  }
  cout << min(zeroL, oneL) + min(zeroR, oneR);
  return 0;
}
