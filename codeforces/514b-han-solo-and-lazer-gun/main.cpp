#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<pair<int, int>, bool> a[1000];
  int n, x, y, count = 0;
  scanf("%d %d %d", &n, &x, &y);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].first.first, &a[i].first.second);
    a[i].second = true;
  }
  for (int i = 0; i < n; i++) {
    if (a[i].second) {
      double k;
      if (a[i].first.first - x != 0) {
        k = (a[i].first.second - y) * 1. / (a[i].first.first - x);
        for (int j = i + 1; j < n; j++) {
          if (abs(a[j].first.second - y - k * (a[j].first.first - x)) < 0.00000001) a[j].second = false;
        }
      }
      else {
        for (int j = i + 1; j < n; j++) {
          if (a[j].first.first == x) a[j].second = false;
        }
      }
      count++;
    }
  }
  printf("%d", count);
  return 0;
}
