#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  cout << (n + m - 1) - min(n, m) << " " << min(n, m);
  return 0;
}
