#include <bits/stdc++.h>

using namespace std;

int custom_find(string s) {
  int n= s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == '.') return i;
  }
  return -1;
}

bool check(string t) {
  int j = custom_find(t), n = t.size();
  for (int i = j + 1; i < n; i++) {
    if (t[i] != '0') return false;
  }
  return true;
}

int main() {
  string s, t = "";
  cin >> s;
  int n = s.size(), l = 0, r = n - 1, k, e;
  if (custom_find(s) >= 0) while (s[r] == '0') r--;
  while (s[l] == '0') l++;
  for (int i = l; i <= r; i++) {
    t += s[i];
  }
  if (custom_find(t) < 0) t += ".";
  k = custom_find(t);
  for (int i = k; i > 1; i--) {
    swap(t[i], t[i - 1]);
  }
  e = k - custom_find(t);
  if (t[0] == '0' || t[0] == '.') {
    int i = 0;
    while (t[i] == '0' || t[i] == '.') {
      i++;
      e--;
    }
    cout << t[i];
    if (i + 1 < (int) t.size()) cout << ".";
    for (int j = i + 1; j < (int) t.size(); j++) {
      cout << t[j];
    }
    if (e != 0) cout << "E" << e;
    return 0;
  }
  if (check(t)) cout << t[0];
  else {
    int l = t.size() - 1;
    while (t[l] == '0') l--;
    for (int i = 0; i <= l; i++) {
      cout << t[i];
    }
  }
  if (e != 0) cout << "E" << e;
  return 0;
}
