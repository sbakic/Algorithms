#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int n = s.size(), i = n % 2 == 0 ? n / 2 - 1: n / 2, j = 1, k = 1;
  while (i >= 0 && i < n) {
    cout << s[i];
    i += k * j;
    j++;
    k *= -1;
  }
  return 0;
}
