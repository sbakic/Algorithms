#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n == 1) {
    cout << 3;
    return 0;
  }
  if (n == 2) {
    cout << 4;
    return 0;
  }
  cout << (n % 2 == 0 ? n - 2 : 1);
  return 0;
}
