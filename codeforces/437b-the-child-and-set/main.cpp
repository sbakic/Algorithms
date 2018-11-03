#include <bits/stdc++.h>

using namespace std;

int make(int n) {
  int count = 0;
  while ((n & 1) == 0) {
    count++;
    n >>= 1;
  }
  return 1 << count;
}

int main() {
  vector<int> a;
  int sum, k;
  scanf("%d %d", &sum, &k);
  while (sum && k) {
    int x = make(k);
    if (sum >= x) {
      sum -= x;
      a.push_back(k);
    }
    k--;
  }
  if (sum) {
    printf("-1\n");
    return 0;
  }
  int n = a.size();
  printf("%d\n", n);
  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
