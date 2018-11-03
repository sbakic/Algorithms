#include <bits/stdc++.h>

using namespace std;

int main() {
  long long l, r, curr = 1LL;
  int k;
  bool found = false;
  cin >> l >> r >> k;
  while (true) {
    if (curr >= l && curr <= r) {
      cout << curr << " ";
      found = true;
    }
    if (curr > r / k) break;
    curr *= k;
  }
  if (!found) cout << "-1";
  return 0;
}
