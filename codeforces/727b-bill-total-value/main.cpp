#include <bits/stdc++.h>

using namespace std;

string make(string a, string b) {
  string curr = "";
  int n = a.size(), m = b.size();
  for (int i = n - 1 - m; i >= 0; i--) {
    if (a[i] != '.') curr += "0";
    else curr += ".";
  }
  reverse(curr.begin(), curr.end());
  return curr + b;
}

string add(string a, string b) {
  string ans = "";
  int n = a.size(), m = b.size();
  if (m < 3 || b[m - 3] != '.') b += ".00", m += 3;
  if (a == "") return b;
  if (n > m) b = make(a, b);
  else if (m > n) a = make(b, a);
  int N = max(a.size(), b.size()), add_part = 0;
  for (int i = N - 1; i >= 0; i--) {
    if (a[i] == '.') {
      ans += ".";
      continue;
    }
    int curr = (a[i] - '0') + (b[i] - '0') + add_part;
    ans += (curr % 10) + '0';
    add_part = curr / 10;
  }
  if (add_part > 0) {
    if (ans[N - 4] == '.') ans += ".";
    ans += (add_part + '0');
  }
  reverse(ans.begin(), ans.end());
  return ans;
}

string trim(string s) {
  int n = s.size();
  if (n > 3 && s[n - 3] == '.' && s[n - 2] == '0' && s[n - 1] == '0') return s.substr(0, n - 3);
  return s;
}

int main() {
  string s, ans = "";
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    string curr = "";
    while (s[i] >= 'a' && s[i] <= 'z' && i < n) i++;
    while ((s[i] < 'a' || s[i] > 'z') && i < n) curr += s[i++];
    ans = add(ans, curr);
  }
  cout << trim(ans);
  return 0;
}
