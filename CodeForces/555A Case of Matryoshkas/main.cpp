#include <stdio.h>
#include <utility>
#include <iostream>

using namespace std;

pair<int, bool> b[200000];

int main() {
  int n, k, separate = 0, parts = 0, maxA = 0;
  scanf("%d %d", &n, &k);
  while (k--) {
    int m, a[100000];
    scanf("%d", &m);
    for (int i = 0; i < m; i++) {
      scanf("%d", &a[i]);
      maxA = max(maxA, a[i]);
    }
    parts++;
    for (int i = 0; i < m - 1; i++) {
      if (a[i] + 1 < a[i + 1]) {
        parts++;
        separate++;
        b[a[i]].second = true;
      }
      b[a[i]].first = a[i];
    }
    b[a[m - 1]].second = true;
    b[a[m - 1]].first = a[m - 1];
  }
  int index = 1;
  while (!b[index].second && index < maxA) index++;
  if (index > 1) b[index].second = false;
  index++;
  for (int i = index; i < maxA; i++) {
    if (!b[i].second) {
      separate++;
      parts++;
    }
  }
  printf("%d", separate + parts - 1);
  return 0;
}
