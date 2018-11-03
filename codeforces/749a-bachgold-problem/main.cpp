#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n;
  k = (n % 2 == 0 ? n / 2 : n / 2 - 1);
  cout << n / 2 << '\n';
  for (int i = 0; i < k; i++) {
    cout << "2 ";
  }
  if (n % 2 == 1) cout << "3";
  return 0;
}
