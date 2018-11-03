#include <bits/stdc++.h>

using namespace std;

int main() {
          // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
  int a[] = {0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 15, 4};
  int n;
  cin >> n;
  cout << (n - 10 >= 0 && n - 10 <= 11 ? a[n - 10] : 0);
  return 0;
}
