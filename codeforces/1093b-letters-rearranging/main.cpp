#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s, int n) {
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    bool ans = true;
    string s;
    cin >> s;
    int n = s.size();
    if (isPalindrome(s, n)) {
      ans = false;
      for (int i = 0; i < n - 1; i++) {
        if (s[i] != s[i + 1]) {
          swap(s[i], s[i + 1]);
          ans = true;
          break;
        }
      }
    }
    cout << (ans ? s : "-1") << endl;
  }
  return 0;
}
