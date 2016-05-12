#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, a[100000] = {}, size = 0;
  scanf("%d %d", &n, &m);
  if (m % 2 == 0) {
    size = m / 2;
    for (int i = 0; i <= size; i++) {
      if (i == 0) a[i] = i;
      else {
        a[2 * i - 1] = i;
        a[2 * i] = -i;
      }
    }
  }
  else {
    size = m / 2 + 1;
    for (int i = 0; i <= size; i++) {
      if (i == 0) a[i + 1] = i;
      if (i == 1) {
        a[i - 1] = i;
        a[i + 2] = -i;
      }
      else {
        a[2 * i - 2] = i;
        a[2 * i + 1] = -i;
      }
    }
  }
  if (m == 1) size = 0;
  while (true) {
    for (int i = 0; i <= size; i++, n--) {
      if (n) printf("%d\n", m / 2 + a[i]);
      else break;
    }
    if (!n) break;
  }
  return 0;
}
