#include <bits/stdc++.h>

using namespace std;

int main() {
  int t, s, x;
  cin >> t >> s >> x;
  if (x == t || (x - t > 0 &&(x - t) % s == 0) || (x - t - 1 > 0 && (x - t - 1) % s == 0)) cout << "YES";
  else cout << "NO";
  return 0;
}
