#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, x, a[100001] = {};
  long long first = 0, second = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> x;
    a[x] = i;
  }
  cin >> m;
  while (m--) {
    cin >> x;
    first += a[x];
    second += n - a[x] + 1;
  }
  cout << first << " " << second;
  return 0;
}
