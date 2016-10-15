#include <bits/stdc++.h>

using namespace std;

string digits(long long x) {
  string s = "";
  while (x) {
    s += (x % 2) + '0';
    x /= 10;
  }
  while (s.size() < 18) s += "0";
  reverse(s.begin(), s.end());
  return s;
}

int main() {
  int t;
  map<string, int> a;
  scanf("%d", &t);
  while (t--) {
    string c, x;
    long long d;
    cin >> c >> d;
    x = digits(d);
    if (c == "+") a[x]++;
    else if (c == "-") a[x]--;
    else cout << a[x] << '\n';
  }
  return 0;
}
