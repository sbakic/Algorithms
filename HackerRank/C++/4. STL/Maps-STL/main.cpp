#include <iostream>
#include <map>

using namespace std;

int main() {
  map <string, int> a;
  int q;
  cin >> q;
  while (q--) {
    int x, y;
    string s;
    cin >> x >> s;
    map <string, int>::iterator it = a.find(s);
    if (x == 1) {
      cin >> y;
      if (it == a.end()) a.insert(make_pair(s, y));
      else it -> second += y;
    }
    else if (x == 2) {
      if (it != a.end()) a.erase(s);
    }
    else {
      cout << it -> second << '\n';
    }
  }
  return 0;
}
