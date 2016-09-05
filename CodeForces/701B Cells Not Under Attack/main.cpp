#include <bits/stdc++.h>

using namespace std;

int main() {
  set<int> a, b;
  long long n, m;
  scanf("%I64d %I64d", &n, &m);
  while (m--) {
    int x, y;
    scanf("%d %d", &x, &y);
    a.insert(x);
    b.insert(y);
    long long curr = a.size() * n + b.size() * n - (long long) a.size() * b.size();
    printf("%I64d ", n * n - curr);
  }
  return 0;
}
