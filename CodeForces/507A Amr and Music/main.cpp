#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int n, k, a[12345], b[12345], sum = 0, counter = 0;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    b[i] = a[i];
  }
  sort(a, a + n);
  if(a[0] > k) {
    printf("0");
    return 0;
  }
  for (int i = 0; i < n; i++) {
    if (sum + a[i] <= k) {
      sum += a[i];
      counter++;
    }
  }
  printf("%d\n", counter);
  for (int i = 0; i < counter; i++) {
    for (int j = 0; j < n; j++) {
      if(a[i] == b[j]) {
        printf("%d ", j + 1);
        b[j] = -1;
        break;
      }
    }
  }
  return 0;
}
