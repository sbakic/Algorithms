#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[200000], first = 0, last = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    if (a[i] == a[0]) first++;
    if (a[i] == a[n - 1]) last++;
  }
  printf("%d %I64d", a[n - 1] - a[0], a[0] == a[n - 1] ? (long long) (first - 1) * first / 2 : (long long) first * last);
  return 0;
}
