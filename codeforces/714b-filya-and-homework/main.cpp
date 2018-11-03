#include <bits/stdc++.h>

using namespace std;

int main() {
  map<int, int> a;
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    a[x]++;
  }
  if (a.size() > 3) cout << "NO";
  else {
    vector<int> v;
    for (auto i : a) {
      v.push_back(i.first);
    }
    if (v.size() < 3 || v[2] - v[1] == v[1] - v[0]) cout << "YES";
    else cout << "NO";
  }
  return 0;
}
