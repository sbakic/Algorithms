#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int n, a[300000], maxNumber = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for (int i = n - 1; i > 0; i--) {
    maxNumber = max(maxNumber, a[i] & a[i - 1]);
  }
  printf("%d", maxNumber);
  return 0;
}
