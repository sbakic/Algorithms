#include <bits/stdc++.h>

using namespace std;

int convert(string s) {
  int n = s.size(), ans = 0, d = 1;
  for (int i = n - 1; i >= 0; i--, d *= 10) {
    ans += (s[i] - '0') * d;
  }
  return ans;
}

int days(int d, int m) {
  int ans = d;
  for (int i = 1; i < m; i++) {
    switch(i) {
      case 1: case 3:  case 5: case 7: case 8: case 10: case 12: ans += 31; break;
      case 4: case 6: case 9: case 11: ans += 30; break;
      case 2: ans += 28; break;
    }
  }
  return ans;
}

int valid(string s) {
  if (s[2] != '-' || s[5] != '-') return -1;
  bool check = true;
  for (int i = 0; i < 10; i++) {
    if (i != 2 && i != 5 && s[i] == '-') check = false;
  }
  if (!check) return -1;
  int d = convert(s.substr(0, 2)), m = convert(s.substr(3, 2)), y = convert(s.substr(6, 4));
  if (y < 2013 || y > 2015) return -1;
  if (m < 1 || m > 12) return -1;
  if (d < 1 || d > 31) return -1;
  if ((m == 2 || m == 4 || m == 6 || m == 9 || m == 11) && d > 30) return -1;
  if (m == 2 && d > 28) return -1;
  return (y - 2013) * 365 + days(d, m);
}

string make(int days) {
  int ans = 0, d, m;
  for (int i = 1; i <= 12; i++) {
    int curr;
    switch(i) {
      case 1: case 3:  case 5: case 7: case 8: case 10: case 12: curr = 31; break;
      case 4: case 6: case 9: case 11: curr = 30; break;
      case 2: curr = 28; break;
    }
    if (ans + curr > days) {
      m = i;
      d = days - ans;
      break;
    }
    if (ans + curr == days) {
      m = i;
      d = curr;
      break;
    }
    ans += curr;
  }
  string s = "";
  s += (d / 10 + '0');
  s += (d % 10 + '0');
  s += "-";
  s += (m / 10 + '0');
  s += (m % 10 + '0');
  return s;
}

int main() {
  int m = 3 * 365 + 1, a[m] = {}, max = -1, ans = -1, y;
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n - 9; i++) {
    int curr = valid(s.substr(i, 10));
    if (curr > 0) {
      a[curr]++;
    }
  }
  for (int i = 0; i < m; i++) {
    if (a[i] > max) {
      max = a[i];
      ans = i;
    }
  }
  if ((ans / 365 == 0 && ans % 365 > 0) || (ans / 365 == 1 && ans % 365 == 0)) y = 2013;
  if ((ans / 365 == 1 && ans % 365 > 0) || (ans / 365 == 2 && ans % 365 == 0)) y = 2014;
  if ((ans / 365 == 2 && ans % 365 > 0) || (ans / 365 == 3 && ans % 365 == 0)) y = 2015;
  cout << make((ans % 365 == 0 ? 365 : ans % 365)) << "-" << y;
  return 0;
}
