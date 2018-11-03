#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, ans = 0;
  cin >> n >> m;
  for (int i = 0; i <= 1000; i++) {
    for (int j = 0; j <= 1000; j++) {
      if (i * i + j == n && j * j + i == m) ans++;
    }
  }
  cout << ans;
  return 0;
}
