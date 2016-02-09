#include <bits/stdc++.h>

using namespace std;

bool check(int a[], int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] != 100) return false;
  }
  return true;
}

bool compare(int x, int y) {
  return (x % 10) > (y % 10);
}

int main() {
  int n, k, a[100000], sum = 0;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n, compare);
  while (k > 0) {
    for (int i = 0; i < n; i++) {
      if (a[i] < 100) {
        int l = 10 - (a[i] % 10);
        if (k - l >= 0) {
          k -= l;
          a[i] += l;
        }
        else {
          k = 0;
          a[i] += k;
        }
      }
    }
    if (check(a, n)) break;
  }
  for (int i = 0; i < n; i++) {
    sum += (a[i] / 10);
  }
  printf("%d", sum);
  return 0;
}
