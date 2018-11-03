#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
  int n, a[100000];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (i == 0 ) printf("%d %d\n", abs(a[i] - a[i + 1]), abs(a[i] - a[n - 1]));
    else if (i == n - 1) printf("%d %d\n", abs(a[i] - a[i - 1]), abs(a[i] - a[0]));
    else printf("%d %d\n", min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1])), max(abs(a[i] - a[0]), abs(a[i] - a[n - 1])));
  }
  return 0;
}
