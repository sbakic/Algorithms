#include <iostream>

using namespace std;

int main() {
  int n, a[100000];
  long long ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 1; i < n; i++) {
    if (a[i - 1] > a[i]) ans += a[i - 1] - a[i];
  }
  printf("%I64d", ans);
  return 0;
}
