#include <bits/stdc++.h>

using namespace std;

int main() {
  int a1, a2, count = 0;
  cin >> a1 >> a2;
  while (a1 > 0 && a2 > 0 && !(a1 == 1 && a2 == 1)) {
    if (a1 == 1 || a1 == 2) {
      a1++;
      a2 -= 2;
    }
    else {
      a2++;
      a1 -= 2;
    }
    count++;
  }
  cout << count;
  return 0;
}
