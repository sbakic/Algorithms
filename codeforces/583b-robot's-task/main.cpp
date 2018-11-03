#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<int, bool> a[1000] = {};
  int n, count = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i].first);
    a[i].second = false;
  }
  int curr = 0, dir = 1;
  while (curr < n) {
    if(dir == 1) {
      for (int i = 0; i < n; i++) {
        if (a[i].first <= curr && !a[i].second) {
          a[i].second = true;
          curr++;
        }
      }
      dir = 0;
    }
    else {
      for (int i = n - 1; i >= 0; i--) {
        if (a[i].first <= curr && !a[i].second) {
          a[i].second = true;
          curr++;
        }
      }
      dir = 1;
    }
    count++;
  }
  printf("%d", count - 1);
  return 0;
}
