#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, vector<int>> a;
  int n, m, first = 0, second = 0, both = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    a[s].push_back(1);
  }
  for (int i = 0; i < m; i++) {
    string s;
    cin >> s;
    a[s].push_back(2);
  }
  for (auto i : a) {
    if (i.second.size() == 2) both++;
    else {
      if (i.second[0] == 1) first++;
      if (i.second[0] == 2) second++;
    }
  }
  if (both % 2 == 0) {
    if (first > second) cout << "YES";
    else cout << "NO";
  }
  else {
    if (first >= second || second == 0) cout << "YES";
    else cout << "NO";
  }
  return 0;
}
