#include <bits/stdc++.h>

using namespace std;

int main() {
  int a[101] = {}, sum = 0, two[2] = {}, more = 0;
  for (int i = 0; i < 5; i++) {
    int x;
    cin >> x;
    a[x]++;
    sum += x;
  }
  for (int i = 0, j = 0; i < 101; i++) {
    if (a[i] >= 3) more = 3 * i;
    if (a[i] == 2) two[j++] = a[i] * i;
  }
  cout << sum - max(more, max(two[0], two[1]));
  return 0;
}
