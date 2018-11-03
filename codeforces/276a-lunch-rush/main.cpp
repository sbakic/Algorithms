#include <stdio.h>
#include <utility>
#include <iostream>

using namespace std;

int main() {
  pair<int, int> a[10000];
  int n, k, maxJoy = -1000000000;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a[i].first, &a[i].second);
  }
  for (int i = 0; i < n; i++) {
    int joy;
    joy = (k > a[i].second) ? a[i].first : a[i].first - (a[i].second - k);
    maxJoy = max(maxJoy, joy);
  }
  printf("%d", maxJoy);
  return 0;
}
