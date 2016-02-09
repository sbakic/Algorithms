#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<pair<int, int>, bool> a[100001];
  pair<int, int> b[100000];
  for (int i = 0; i < 100001; i++) {
    a[i].first.first = -1;
    a[i].first.second = -1;
    a[i].second = true;
  }
  int n, length = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (a[x].second) {
      if (a[x].first.first == -1) {
        a[x].first.first = i;
        a[x].first.second = 0;
      }
      else if (a[x].first.second == 0) {
        a[x].first.second = i - a[x].first.first;
        a[x].first.first = i;
      }
      else if (i - a[x].first.first != a[x].first.second) a[x].second = false;
      else a[x].first.first = i;
    }
  }
  for (int i = 0; i < 100001; i++) {
    if (a[i].first.first != -1 && a[i].second) {
      b[length].first = i;
      b[length++].second = a[i].first.second;
    }
  }
  sort(b, b + length);
  printf("%d\n", length);
  for (int i = 0; i < length; i++) {
    printf("%d %d\n", b[i].first, b[i].second);
  }
  return 0;
}
