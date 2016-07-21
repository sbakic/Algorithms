#include <bits/stdc++.h>

using namespace std;

long long a[1025], n = 0;

void make(long long curr) {
  if (curr > 4444444444) return;
  a[n++] = curr;
  make(curr * 10 + 4);
  make(curr * 10 + 7);
}

int main() {
  long long ans = 0;
  int l, r, L = 1025, R = 1025;
  cin >> l >> r;
  make(0);
  sort(a, a + n);
  for (int i = 1; i < n; i++) {
    if (a[i] >= l) L = min(L, i);
    if (a[i] >= r) R = min(R, i);
  }
  for (int i = L + 1; i <= R; i++) {
    ans += a[i] * (a[i] - a[i - 1]);
  }
  cout << ans + a[L] * (a[L] - l + 1) + a[R] * (r - a[R]);
  return 0;
}
