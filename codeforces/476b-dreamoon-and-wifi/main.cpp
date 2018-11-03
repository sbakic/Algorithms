#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void make(int curr, int check) {
  if (check == 0) {
    v.push_back(curr);
    return;
  }
  make(curr + 1, check - 1);
  make(curr - 1, check - 1);
}

int main() {
  string s, t;
  cin >> s >> t;
  int n = s.size(), m = t.size(), pos = 0, curr = 0, check = 0;
  double p = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '+') pos++;
    else pos--;
  }
  for (int i = 0; i < m; i++) {
    if (t[i] == '+') curr++;
    else if (t[i] == '-') curr--;
    else check++;
  }
  make(curr, check);
  for (int i = 0; i < (int) v.size(); i++) {
    if (v[i] == pos) p++;
  }
  cout << setprecision(12) << fixed << p / v.size();
  return 0;
}
