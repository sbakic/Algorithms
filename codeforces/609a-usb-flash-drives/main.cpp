#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[100], count = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a, a + n, greater<int>());
  while (count < n) {
    m -= a[count];
    if (m > 0) count++;
    else break;
  }
  cout << (m > 0 ? -1 : count + 1);
  return 0;
}
