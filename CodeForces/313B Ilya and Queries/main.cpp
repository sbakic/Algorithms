#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), m, dp[1000001] = {}, curr = 0;
  for (int i = 1; i < n; i++) {
    if (s[i - 1] == s[i]) curr++;
    dp[i] = curr;
  }
  scanf("%d", &m);
  while (m--) {
    int l, r;
    scanf("%d %d", &l ,&r);
    printf("%d\n", dp[r - 1] - dp[l - 1]);
  }
  return 0;
}
