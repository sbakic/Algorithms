#include <bits/stdc++.h>

using namespace std;

string s;
int a[26];

bool check(int l, int r) {
  int ans = 0, curr = 0;
  for (int i = 0; i < 26; i++) {
    a[i] = 0;
  }
  for (int i = l; i <= r; i++) {
    if (s[i] != '?') a[s[i] - 'A']++;
    else curr++;
  }
  for (int i = 0; i < 26; i++) {
    if (a[i] <= 1) ans += a[i];
    else return false;
  }
  return ans + curr == 26;
}

void make(int l, int r) {
  for (int i = l; i <= r; i++) {
    if (s[i] == '?') {
      for (int j = 0; j < 26; j++) {
        if (a[j] == 0) {
          s[i] = j + 'A';
          a[j]++;
          break;
        }
      }
    }
  }
}

void make_question(int n) {
  for (int i = 0; i < n; i++) {
    if (s[i] == '?') s[i] = 'A';
  }
}

int main() {
  cin >> s;
  int n = s.size();
  for (int i = 0; i <= n - 26; i++) {
    if (check(i, i + 25)) {
      make(i, i + 25);
      make_question(n);
      cout << s;
      return 0;
    }
  }
  cout << "-1";
  return 0;
}
