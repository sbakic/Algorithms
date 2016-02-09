#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
  int n, a[1001], x, diffMin = 1000, diffMax = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 1; i < n - 1; i++) {
    if(diffMin > a[i + 1] - a[i - 1]) {
      diffMin = a[i + 1] - a[i - 1];
      x = i;
    }
  }
  for (int i = 1; i < n - 1; i++) {
    if(i == x) {
      diffMax = max(diffMax, a[i + 1] - a[i - 1]);
    }
    else {
      diffMax = max(diffMax, a[i + 1] - a[i]);
    }
  }
  printf("%d", diffMax);
  return 0;
}
