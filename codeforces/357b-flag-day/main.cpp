#include <bits/stdc++.h>

using namespace std;

void check(int a[], int n, int b[], int flag) {
  if (a[b[0] - 1] == 0 && a[b[1] - 1] == 0 && a[b[2] - 1] == 0) {
    a[b[0] - 1] = 1;
    a[b[1] - 1] = 2;
    a[b[2] - 1] = 3;
    return;
  }
  int c[] = {1, 2, 3};
  for (int i = 0; i < 3; i++) {
    if (c[i] == flag) c[i] = 0;
  }
  for (int i = 0; i < 3; i++) {
    if (a[b[i] - 1] == flag) {
      for (int j = 0; j < 3; j++) {
        if (a[b[j] - 1] == 0) {
          for (int k = 0; k < 3; k++) {
            if (c[k] > 0) {
              a[b[j] - 1] = c[k];
              c[k] = 0;
              break;
            }
          }
        }
      }
    }
  }
  return;
}

int main() {
  int n, m, a[100000] = {};
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i++) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int b[] = {x, y, z};
    check(a, n, b, 1);
    check(a, n, b, 2);
    check(a, n, b, 3);
  }
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
