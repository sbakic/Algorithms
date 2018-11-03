#include <bits/stdc++.h>

using namespace std;

string make(char c) {
  string s[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9"};
  for(int i = 0; i < 9; i++) {
    if (s[i][0] == c) return s[i];
  }
  return "0";
}

int main() {
  string s, ans = "";
  cin >> s;
  if (s[0] == '-') {
    ans += "(";
    s = s.substr(1, s.size());
  }
  int n = s.size();
  ans += "$";
  int count = 0;
  for (int i = 0; i < n && s[i] != '.'; i++) {
    count++;
  }
  for (int i = 0; i < n && s[i] != '.'; i++) {
    if (i != 0 && (i - count % 3) % 3 == 0) ans += ",";
    ans += s[i];
  }
  ans += ".";
  if (n == count || n == count + 1) ans += "00";
  if (n == count + 2) {
    ans += make(s[count + 1]);
    ans += "0";
  }
  if (n >= count + 3) {
    ans += make(s[count + 1]);
    ans += make(s[count + 2]);
  }
  if (ans[0] == '(') ans += ")";
  cout << ans;
  return 0;
}
