#include <iostream>
#include <string>
#include <vector>

using namespace std;

pair<string, int> a[100];

int main() {
  int n;
  cin >> n;
  string s[100];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  a[0].first = s[0];
  for (int i = 0, z = 1; i < n; i++) {
    bool found = false;
    int j = 0;
    for (j = 0; j < n; j++) {
      if (s[i] == a[j].first) {
        found = true;
        break;
      }
    }
    if (found) a[j].second++;
    else {
      a[z].first = s[i];
      a[z].second++;
      z++;
    }
  }
  int winner = 0;
  for (int i = 0; i < n; i++) {
    winner = max(winner, a[i].second);
  }
  for (int i = 0; i < n; i++) {
    if (winner == a[i].second) {
      cout << a[i].first;
      break;
    }
  }
  return 0;
}
