#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  if (2 * (n + 1) >= m && m >= n) {
    int curr = m - (n + 1);
    while (n--) {
      printf("1");
      m--;
      if (curr >= 0) {
        printf("1");
        curr--;
        m--;
      }
      printf("0");
    }
    if (m == 2) printf("11");
    if (m  == 1) printf("1");
  }
  else if (n == m + 1) {
    for (int i = 0; i < m; i++) {
      printf("01");
    }
    printf("0");
  }
  else cout << "-1";
  return 0;
}
