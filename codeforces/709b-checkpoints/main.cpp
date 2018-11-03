#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[100000], ans1 = 0, ans2 = 0;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  if (a[0] >= k && a[n - 2] >= k) ans1 = abs(k - a[n - 2]);
  else if (a[0] <= k && a[n - 2] <= k) ans1 = abs(k - a[0]);
  else {
    if (abs(k - a[0]) > abs(k - a[n - 2])) ans1 = 2 * abs(k - a[n - 2]) + abs(k - a[0]);
    else ans1 = 2 * abs(k - a[0]) + abs(k - a[n - 2]);
  }
  if (a[1] >= k && a[n - 1] >= k) ans2 = abs(k - a[n - 1]);
  else if (a[1] <= k && a[n - 1] <= k) ans2 = abs(k - a[1]);
  else {
    if (abs(k - a[1]) > abs(k - a[n - 1])) ans2 = 2 * abs(k - a[n - 1]) + abs(k - a[1]);
    else ans2 = 2 * abs(k - a[1]) + abs(k - a[n - 1]);
  }
  if (n == 1) ans1 = 0;
  printf("%d", min(ans1, ans2));
  return 0;
}
