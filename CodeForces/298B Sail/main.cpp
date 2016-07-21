#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n, sx, sy, ex, ey, N = 0, E = 0, W = 0, S = 0;
  cin >> n >> sx >> sy >> ex >> ey >> s;
  int x = sx - ex, y = sy - ey;
  if (y > 0) S = y;
  else N = -y;
  if (x > 0) W = x;
  else E = -x;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'N' && N > 0) N--;
    if (s[i] == 'E' && E > 0) E--;
    if (s[i] == 'W' && W > 0) W--;
    if (s[i] == 'S' && S > 0) S--;
    if (N == 0 && E == 0 && W == 0 && S == 0) {
      cout << i + 1;
      return 0;
    }
  }
  cout << "-1";
  return 0;
}
