#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  set<int> s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x) {
      s.insert(x);
    }
  }
  cout << s.size();
  return 0;
}