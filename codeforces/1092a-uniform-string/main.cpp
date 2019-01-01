#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int n, k, i = 0;
    cin >> n >> k;
    while (n--) {
      cout << (char) (97 + i);
      i = ++i % k;
    }
    cout << '\n';
  }
  return 0;
}
