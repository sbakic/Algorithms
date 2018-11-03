#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int t, n, a[100000];
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
    }
    for (int i = 0; i < n - 1; i++) {
      if (i % 2 == 0 && a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
      }
      else if (i % 2 == 1 && a[i] < a[i + 1]){
        swap(a[i], a[i + 1]);
      }
      printf("%d ", a[i]);
    }
    printf("%d\n", a[n - 1]);
  }
  return 0;
}
