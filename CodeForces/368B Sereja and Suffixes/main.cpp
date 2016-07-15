#include <bits/stdc++.h>

using namespace std;

int main() {
  set<int> s;
  int n, m, a[100000], b[100000];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = n - 1; i >= 0; i--) {
    s.insert(a[i]);
    b[i] = s.size();
  }
  while (m--) {
    int l;
    scanf("%d", &l);
    printf("%d\n", b[l - 1]);
  }
  return 0;
}
