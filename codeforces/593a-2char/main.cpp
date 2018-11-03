#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<string, int> a[351];
  string s[100], alphabet = "abcdefghijklmnopqrstuvwxyz";
  int n, ans = 0, same1 = 0, same2 = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0, k = 0; i < 26; i++) {
    for (int j = i; j < 26; j++, k++) {
      a[k].first += alphabet[i];
      a[k].first += alphabet[j];
      a[k].second = 0;
    }
  }
  for (int i = 0; i < n; i++) {
    int length = s[i].size();
    bool c[26] = {};
    for (int j = 0; j < length; j++) {
      c[s[i][j] - 'a'] = true;
    }
    string word = "";
    for (int j = 0; j < 26; j++) {
      if (c[j]) word += (j + 'a');
    }
    if (word.size() == 2) {
      for (int k = 0; k < 351; k++) {
        if (a[k].first == word) a[k].second += length;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    int length = s[i].size();
    bool c[26] = {};
    for (int j = 0; j < length; j++) {
      c[s[i][j] - 'a'] = true;
    }
    string word = "";
    for (int j = 0; j < 26; j++) {
      if (c[j]) word += (j + 'a');
    }
    if (word.size() == 1) {
      for (int k = 0; k < 351; k++) {
        if ((a[k].second > 0 && (word[0] == a[k].first[0] || word[0] == a[k].first[1])) ||
          (word[0] == a[k].first[0] && word[0] == a[k].first[1])) a[k].second += length;
      }
    }
  }
  for (int i = 0; i < 351; i++) {
    if (a[i].first[0] != a[i].first[1]) ans = max(ans, a[i].second);
    else {
      if (a[i].second > same1) {
        same2 = same1;
        same1 = a[i].second;
      }
      else if (a[i].second > same2) {
        same2 = a[i].second;
      }
    }
  }
  cout << max(ans, same1 + same2);
  return 0;
}
