#include <iostream>

using namespace std;

int main() {
  int x;
  string of, s;
  cin >> x >> of >> s;
  if (s == "week") {
    if (x == 5 || x == 6) cout << 53;
    else cout << 52;
  }
  else {
    if (x == 31) cout << 7;
    else if (x == 30) cout << 11;
    else cout << 12;
  }
  return 0;
}
