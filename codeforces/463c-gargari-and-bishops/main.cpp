#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, int> b1, b2;
  long long d1[4001] = {}, d2[4001] = {}, sum1 = -1, sum2 = -1;
  int n, a[2000][2000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
      d1[i + j] += (long long) a[i][j];
      d2[i - j + n] += (long long) a[i][j];
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      long long curr = d1[i + j] + d2[i - j + n] - a[i][j];
      if ((i + j) % 2 == 0) {
        if (curr > sum1) {
          sum1 = curr;
          b1.first = i + 1;
          b1.second = j + 1;
        }
      }
      else {
        if (curr > sum2) {
          sum2 = curr;
          b2.first = i + 1;
          b2.second = j + 1;
        }
      }
    }
  }
  printf("%I64d\n%d %d %d %d", sum1 + sum2, b1.first, b1.second, b2.first, b2.second);
  return 0;
}
