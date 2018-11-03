#include <iostream>

using namespace std;

bool suffix_array(string s, string t) {
  int n = s.size(), m = t.size();
  int a[26] = {}, b[26] = {};
  for (int i = 0; i < n; i++) {
    a[s[i] - 'a']++;
  }
  for (int i = 0; i < m; i++) {
    b[t[i] - 'a']++;
  }
  for (int i = 0; i < 26; i++) {
    if (b[i] > 0 && a[i] < b[i]) return false;
  }
  return true;
}

bool suffix_automaton(string s, string t) {
  int n = s.size(), m = t.size();
  if (n == m && s != t) return false;
  for (int i = 0, j = 0; i < n; i++) {
    if (s[i] == t[j]) j++;
    if (j == m) return true;
  }
  return false;
}

int check(string s, string t) {
  int n = s.size(), m = t.size();
  if (suffix_array(s, t)) {
    if (n == m) return 1;
    else return 2;
  }
  return 3;
}

int main() {
  string s, t;
  cin >> s >> t;
  if (suffix_automaton(s, t)) cout << "automaton";
  else if (check(s, t) == 1) cout << "array";
  else if (check(s, t) == 2) cout << "both";
  else cout << "need tree";
  return 0;
}
