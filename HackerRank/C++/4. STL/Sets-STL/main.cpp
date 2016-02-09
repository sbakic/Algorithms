#include <iostream>
#include <set>

using namespace std;

int main() {
  set<int> a;
  int q;
  cin >> q;
  while (q--) {
    int y, x;
    cin >> y >> x;
    switch (y) {
      case 1: a.insert(x); break;
      case 2: a.erase(x); break;
      case 3: {
        set<int>::iterator i = a.find(x);
        if (i == a.end()) cout << "No\n";
        else cout << "Yes\n";
      } break;
    }
  }
  return 0;
}
