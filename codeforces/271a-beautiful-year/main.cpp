#include <bits/stdc++.h>

using namespace std;

void make(vector<int>& v) {
  for (int i = 1000; i <= 9012; i++) {
    set<int> s;
    int j = i, k = i;
    while (k) {
      s.insert(k % 10);
      k /= 10;
    }
    if (s.size() == 4) v.push_back(j);
  }
}

int main() {
  vector<int> v;
  int n;
  cin >> n;
  make(v);
  for (int i = 0; i < (int) v.size(); i++) {
    if (v[i] > n) {
      cout << v[i];
      break;
    }
  }
  return 0;
}
