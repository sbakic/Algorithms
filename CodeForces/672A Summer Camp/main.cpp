#include <bits/stdc++.h>

using namespace std;

string to_string_custom(int a) {
  string s = "", t = "";
  while (a) {
    s += (a % 10 + '0');
    a /= 10;
  }
  int n = s.size();
  for (int i = 0; i < n / 2; i++) {
    swap(s[i], s[n - 1 - i]);
  }
  return s;
}

int main() {
  string s = "";
  int n, i = 1;
  cin >> n;
  while (s.size() < 1000) {
    s += to_string_custom(i++);
  }
  cout << s[n - 1];
  return 0;
}
