#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[1000], b[1001] = {}, ansMin = 0, ansMax = 0;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    b[a[i]]++;
  }
  sort(a, a + m);
  for (int i = 0, k = n; i < m && k >= 0; i++) {
    if (k >= a[i]) ansMin += (a[i] * (a[i] + 1) / 2);
    else {
      while (k--) ansMin += a[i]--;
    }
    k -= a[i];
  }

  for (int i = 1000; i >= 0; i--) {
    if (b[i] > 0) {
      if (n >= b[i]) ansMax += b[i] * i;
      else ansMax += n * i;
      n -= b[i];
      b[i - 1] += b[i];
    }
    if (n <= 0) break;
  }
  cout << ansMax << " " << ansMin;
  return 0;
}
