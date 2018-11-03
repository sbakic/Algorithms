#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

int main() {
  int t, n, k, a[1000], minValue, count;
  scanf("%d", &t);
  while (t--) {
    minValue = 2000000001;
    count = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
      for (int j = i + 1; j < n; j ++) {
        if(abs(k - a[i] - a[j]) < minValue) {
          count = 1;
          minValue = abs(k - a[i] - a[j]);
          }
          else if(abs(k - a[i] - a[j]) == minValue) count++;
      }
    }
    printf("%d %d\n", minValue, count);
  }
  return 0;
}
