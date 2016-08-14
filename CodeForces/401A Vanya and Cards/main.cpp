#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, x, sum = 0;
  cin >> n >> x;
  while (n--) {
    int a;
    cin >> a;
    sum += a;
  }
  cout << ceil(fabs(sum) / x);
  return 0;
}
