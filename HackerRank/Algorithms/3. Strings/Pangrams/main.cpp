#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  pair<char, int> a[26];
  for (char c = 'a', i = 0; c <= 'z'; c++, i++) {
    a[i].first = c;
    a[i].second = 0;
  }
  string s;
  getline(cin, s);
  int n = s.size();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 26; j++) {
      if (s[i] == ' ') continue;
      if (tolower(s[i]) == a[j].first) {
        a[j].second++;
        break;
      }
    }
  }
  for (int i = 0; i < 26; i++) {
    if (a[i].second == 0) {
      cout << "not pangram";
      return 0;
    }
  }
  cout << "pangram";
  return 0;
}
