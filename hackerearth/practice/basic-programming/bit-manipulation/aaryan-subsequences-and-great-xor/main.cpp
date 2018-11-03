#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, ans = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int a;
    scanf("%d", &a);
    ans |= a;
  }
  printf("%d", ans);
  return 0;
}
