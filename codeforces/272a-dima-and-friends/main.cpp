#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, sum = 0, ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    sum += x;
  }
  for (int i = 1; i <= 5; i++) {
    if ((sum + i - 1) % (n + 1) == 0) ans++;
  }
  cout << 5 - ans;
  return 0;
}
