#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, a[300000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  printf("%d", n % 2 == 0 ? a[n / 2 - 1] : a[n / 2]);
  return 0;
}
