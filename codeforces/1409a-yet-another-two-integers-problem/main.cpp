#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int a, b;
    cin >> a >> b;
    cout << abs(a - b) / 10 + (abs(a - b) % 10 > 0 ? 1 : 0) << endl;
  }
  return 0;
}
