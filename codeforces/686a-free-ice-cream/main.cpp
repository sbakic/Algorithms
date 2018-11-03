#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, ans = 0;
  long long x;
  cin >> n >> x;
  while (n--) {
    char c;
    int d;
    cin >> c >> d;
    if (c == '+') x += d;
    else {
      if (x - d >= 0) x -= d;
      else ans++;
    }
  }
  cout << x << " " << ans;
  return 0;
}
