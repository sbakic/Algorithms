#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 0, j = a; i <= a; i++, j--) {
    if (b >= i && c >= j && b - i == c - j) {
      cout << i << " " << b - i << " " << j;
      return 0;
    }
  }
  cout << "Impossible";
  return 0;
}
