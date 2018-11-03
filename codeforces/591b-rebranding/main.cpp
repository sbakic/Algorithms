#include <bits/stdc++.h>

using namespace std;

int main() {
  pair<char, char> a[26];
  for (char c = 'a'; c <= 'z'; c++) {
    a[c - 'a'].first = a[c - 'a'].second = c;
  }
  int n, m;
  char c[200001];
  cin >> n >> m >> c;
  while (m--) {
    char x, y;
    cin >> x >> y;
    for (int i = 0; i < 26; i++) {
      if (a[i].first == x) a[i].first = y;
      else if (a[i].first == y) a[i].first = x;
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0 ; j < 26; j++) {
      if (c[i] == a[j].second) {
        c[i] = a[j].first;
        break;
      }
    }
  }
  cout << c;
  return 0;
}
