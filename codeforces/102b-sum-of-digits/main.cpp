#include <bits/stdc++.h>

using namespace std;

int length(int a) {
  int ans = 0;
  while (a) {
    a /= 10;
    ans++;
  }
  return ans;
}

int make(int a) {
  int ans = 0;
  while (a) {
    ans += a % 10;
    a /= 10;
  }
  return ans;
}

int main() {
  string s;
  cin >> s;
  int n = s.size(), curr = 0, ans = 1;
  for (int i = 0; i < n; i++) {
    curr += s[i] - '0';
  }
  while (length(curr) > 1) {
    curr = make(curr);
    ans++;
  }
  cout << (n == 1 ? 0 : ans);
  return 0;
}
