#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    int hundreds = s[i] - '0';
    if (hundreds % 8 == 0) {
      cout << "YES" << endl << hundreds;
      return 0;
    }
    for (int j = i + 1; j < n; j++) {
      int tens = s[j] - '0';
      if ((hundreds * 10 + tens) % 8 == 0) {
        cout << "YES" << endl << hundreds * 10 + tens;
        return 0;
      }
      for (int k = j + 1; k < n; k++) {
        int ones = s[k] - '0';
        if ((hundreds * 100 + tens * 10 + ones) % 8 == 0) {
          cout << "YES" << endl << hundreds * 100 + tens * 10 + ones;
          return 0;
        }
      }
    }
  }
  cout << "NO";
  return 0;
}
