#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v;
  int n;
  cin >> n;
  for (int i = 2; i <= n; i++) {
    int curr = i, j = 2;
    vector<int> a;
    while (curr > 1) {
      if (curr % j == 0) a.push_back(j);
      while (curr % j == 0) curr /= j;
      j++;
    }
    if (a.size() == 1) v.push_back(i);
  }
  cout << v.size() << '\n';
  for (int i = 0; i < (int) v.size(); i++) {
    cout << v[i] << " ";
  }
  return 0;
}
