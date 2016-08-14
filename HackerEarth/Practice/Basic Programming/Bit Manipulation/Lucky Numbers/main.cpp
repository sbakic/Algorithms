#include <bits/stdc++.h>

using namespace std;

long long make(int first, int second) {
  return (1LL << first) + (1LL << second);
}

int main() {
  int t;
  scanf("%d", &t);
  vector<long long> v;
  for (int i = 0; i < 60; i++) {
    for (int j = i + 1; j <= 60; j++) {
      v.push_back(make(i, j));
    }
  }
  while (t--) {
    int mod = 1e9 + 7;
    long long n, sum = 0;
    scanf("%lld", &n);
    for (int i = 0; i < (int) v.size(); i++) {
      if (v[i] <= n) sum = (sum + v[i]) % mod;
    }
    printf("%lld\n", sum);
  }
  return 0;
}
