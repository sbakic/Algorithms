#include <bits/stdc++.h>

using namespace std;

int main() {
  long long ans = 0;
  int n, a[300000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    ans += (long long) abs(i + 1 - a[i]);
  }
  printf("%I64d", ans);
  return 0;
}
