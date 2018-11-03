#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k, a[100000];
  cin >> n >> k;
  if (n == k) {
    cout << "-1";
    return 0;
  }
  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }
  for (int i = 0; i <= n - k - 2; i += 2) {
    swap(a[i], a[i + 1]);
  }
  if ((n - k) % 2 == 1) swap(a[0], a[n - k - 1]);
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
