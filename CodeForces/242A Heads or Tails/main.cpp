#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<pair<int, int>> v;
  int x, y, a, b;
  cin >> x >> y >> a >> b;
  for (int i = a; i <= x; i++) {
    for (int j = b; j <= y; j++) {
      if (i > j) v.push_back(make_pair(i, j));
    }
  }
  cout << v.size() << '\n';
  for (int i = 0; i < (int) v.size(); i++) {
    cout << v[i].first << " " << v[i].second << '\n';
  }
  return 0;
}
