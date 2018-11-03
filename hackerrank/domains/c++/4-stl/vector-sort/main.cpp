#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> a;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int v;
    cin >> v;
    a.push_back(v);
  }
  sort(a.begin(), a.end());
  for (vector<int>::iterator i = a.begin(); i != a.end(); i++) {
    cout << *i << " ";
  }
  return 0;
}
