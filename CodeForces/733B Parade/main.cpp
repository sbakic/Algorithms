#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[100000], b[100000], L = 0, R = 0, B, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    L += a[i];
    R += b[i];
  }
  B = abs(L - R);
  for (int i = 0; i < n; i++) {
    int curr = abs(a[i] - b[i]), currL = L, currR = R, currB;
    if (a[i] > b[i]) {
      currL -= curr;
      currR += curr;
    }
    else {
      currL += curr;
      currR -= curr;
    }
    currB = abs(currL - currR);
    if (currB > B) {
      B = currB;
      ans = i + 1;
    }
  }
  cout << ans;
  return 0;
}
