#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), e = s.find("e"), k = s.find("."), b = 0;
  for (int i = n - 1, j = 1; i > e; i--, j *= 10) {
    b += (s[i] - '0') * j;
  }
  if (s[2] == '0' && s[3] == 'e') {
    cout << s[0];
    if (s[0] != '0') {
      for (int i = 0; i < b; i++) {
        cout << '0';
      }
    }
    return 0;
  }
   if (k + b < e - 1) {
    for (int i = k; i < k + b; i++) {
      s[i] = s[i + 1];
    }
    for (int i = 0; i < e; i++) {
      if (i == k + b) cout << ".";
      else cout << s[i];
    }
  }
  else {
    for (int i = 0; s[i] != 'e'; i++) {
      if (s[i] == '.') continue;
      cout << s[i];
    }
    for (int i = 0; i < b - (e - k - 1); i++) {
      cout << '0';
    }
  }
  return 0;
}
