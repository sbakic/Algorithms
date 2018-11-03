#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  for (int i = k + 1; i <= n; i++) {
    cout << i << " ";
  }
  for (int i = k; i >= 1; i--) {
    cout << i << " ";
  }
  return 0;
}
