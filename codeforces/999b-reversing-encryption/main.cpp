#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  string s;
  cin >> n >> s;
  for (int i = n; i >= 1; i--) {
    if (n % i == 0) {
      reverse(s.begin(), s.begin() + (n / i));
    }
  }
  cout << s;
  return 0;
}
