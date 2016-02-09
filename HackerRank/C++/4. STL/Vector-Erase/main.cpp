#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> v;
  int n, a, b, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int e;
    cin >> e;
    v.push_back(e);
  }
  cin >> x >> a >> b;
  v.erase(v.begin() + x - 1);
  v.erase(v.begin() + a - 1, v.begin() + b - 1);
  cout << v.size() << "\n";
  for (vector<int>::iterator i = v.begin(); i != v.end(); i++) {
    cout << *i << " ";
  }
  return 0;
}
