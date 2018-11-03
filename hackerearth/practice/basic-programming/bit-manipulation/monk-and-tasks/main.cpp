#include <bits/stdc++.h>

using namespace std;

int ones(long long n) {
  int ans = 0;
  while (n) {
    n = n & (n - 1);
    ans++;
  }
  return ans;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    vector<long long> v[64] = {};
    int n, b[100000];
    long long a[100000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%lld", &a[i]);
      b[i] = ones(a[i]);
    }
    for (int i = 0; i < n; i++) {
      v[b[i]].push_back(a[i]);
    }
    for (int i = 0; i < 64; i++) {
      for (int j = 0; j < (int) v[i].size(); j++) {
        printf("%lld ", v[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}
