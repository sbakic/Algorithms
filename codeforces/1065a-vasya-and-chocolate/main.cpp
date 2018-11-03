#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  long long t, s, a, b, c;
  cin >> t;
  while (t--) {
    cin >> s >> a >> b >> c;
    cout << s / c + (s / (c * a)) * b << endl;
  }
  return 0;
}
