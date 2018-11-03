#include <bits/stdc++.h>

using namespace std;

int main() {
  bool check = false;
  string s;
  int n, ans = 0, count = 0, curr = 0;
  cin >> n >> s;
  for (int i = 0; i <= n; i++) {
    if (s[i] == '(') check = true;
    if (s[i] == ')') check = false;
    if (check) {
      if (isalpha(s[i]) && !isalpha(s[i + 1])) count++;
    }
    else {
      if (isalpha(s[i])) curr++;
      else {
        ans = max(ans, curr);
        curr = 0;
      }
    }
  }
  cout << ans << " " << count;
  return 0;
}
