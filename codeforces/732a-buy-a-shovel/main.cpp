#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, r, ans = 1;
  cin >> k >> r;
  while ((ans * k - r) % 10 != 0 && (ans * k - 10) % 10 != 0) ans++;
  cout << ans;
  return 0;
}
