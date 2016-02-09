#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> a;
  int n, q;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push_back(x);
  }
  cin >> q;
  while (q--) {
    int y;
    cin >> y;
    vector<int>::iterator i = lower_bound(a.begin(), a.end(), y);
    vector<int>::iterator j = upper_bound(a.begin(), a.end(), y);
    if (y == *i) cout << "Yes " << i - a.begin() + 1 << '\n';
    else cout << "No " << j - a.begin() + 1 << '\n';
  }
  return 0;
}
