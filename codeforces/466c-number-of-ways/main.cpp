#include <bits/stdc++.h>

using namespace std;

int main() {
  long long s[500000];
  int n;
  scanf("%d", &n);
  s[0] = 0;
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    s[i + 1] = s[i] + x;
  }
  long long ans = 0;
  if (s[n] % 3 == 0) {
    long long u = s[n] / 3, v = 2 * s[n] / 3;
    long long curr = 0;
    for (int i = 1; i < n; i++) {
      if (s[i] == v) {
        ans += curr;
      }
      if (s[i] == u) {
        curr++;
      }
    }
  }
  cout << ans;
  return 0;
}
