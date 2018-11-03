#include <algorithm>
#include <stdio.h>

using namespace std;

int main() {
  int n, a[100000], time = 0, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  sort(a, a + n);
  for (int i = 0; i < n; i++) {
    if (a[i] >= time) {
      count++;
      time += a[i];
    }
    else if (a[i] < time) continue;
  }
  printf("%d", count);
  return 0;
}
