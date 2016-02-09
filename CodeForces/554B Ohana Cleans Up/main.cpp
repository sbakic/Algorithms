#include <iostream>
#include <string>
#include <utility>

using namespace std;

pair<string, int> s[100];

int main() {
  int n, maxRows = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s[i].first;
  }
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if (s[i].first == s[j].first) s[i].second++;
    }
    s[i].second++;
  }
  for (int i = 0; i < n; i++) {
    maxRows = max(maxRows, s[i].second);
  }
  cout << maxRows;
  return 0;
}
