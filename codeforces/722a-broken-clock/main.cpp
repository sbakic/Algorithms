#include <bits/stdc++.h>

using namespace std;

string make(int a) {
  string s = "";
  while (a) {
    s += (a % 10) + '0';
    a /= 10;
  }
  while (s.size() < 2) s += "0";
  swap(s[0], s[1]);
  return s;
}

int diff(string h, string m, char a, char b, char c, char d) {
  int ans = 0;
  if (h[0] != a) ans++;
  if (h[1] != b) ans++;
  if (m[0] != c) ans++;
  if (m[1] != d) ans++;
  return ans;
}

int main() {
  string s, t;
  int n, l = 0, r = 23, ans = 5;
  cin >> n >> s;
  if (n == 12) l = 1, r = 12;
  for (int i = l; i <= r; i++) {
    for (int j = 0; j < 60; j++) {
      string h = make(i), m = make(j);
      int curr = diff(h, m, s[0], s[1], s[3], s[4]);
      if (curr < ans) {
        ans = curr;
        t = "";
        t += h;
        t += ":";
        t += m;
      }
    }
  }
  cout << t;
  return 0;
}
