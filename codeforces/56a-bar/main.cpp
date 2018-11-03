#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
  string alcohol[11] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
  int t, count = 0;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    bool digit = true;
    for (int i = 0; i < n; i++) {
      if (!isdigit(s[i])) {
        digit = false;
        break;
      }
    }
    if (digit) {
      int a = atoi(s.c_str());
      if (a < 18) count++;
    }
    else {
      for (int i = 0; i < 11; i++) {
        if (s == alcohol[i]) {
          count++;
          break;
        }
      }
    }
  }
  cout << count;
  return 0;
}
