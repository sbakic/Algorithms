#include <bits/stdc++.h>

using namespace std;

bool a[1000];

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  while(m--) {
    int x, y;
    scanf("%d %d", &x , &y);
    a[x - 1] = a[y - 1] = true;
  }
  printf("%d\n", n - 1);
  for (int i = 0; i < n; i++) {
    if (!a[i]) {
      for (int j = 0; j < n; j++) {
        if (i != j) printf("%d %d\n", i + 1, j + 1);
      }
      break;
    }
  }
  return 0;
}
