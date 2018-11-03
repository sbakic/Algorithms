#include <stdio.h>
#include <algorithm>

using namespace std;

int n, a[300001];
long long b[2], sum = 0;

int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++)  {
    scanf("%d", &a[i]);
    sum += a[i];
  }
  sort(a, a + n);
  b[0] = sum;
  for (int i = 0; i < n - 1; i++) {
    sum += a[i];
    b[1] = b[0] - a[i];
    sum += b[1];
    b[0] = b[1];
  }
  printf("%I64d", sum);
  return 0;
}
