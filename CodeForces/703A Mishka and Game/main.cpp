#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, sum1 = 0, sum2 = 0;
  cin >> n;
  while (n--) {
    int x, y;
    cin >> x >> y;
    if (x > y) sum1++;
    else if (x < y) sum2++;
  }
  if (sum1 > sum2) cout << "Mishka";
  else if (sum1 < sum2) cout << "Chris";
  else cout << "Friendship is magic!^^";
  return 0;
}
