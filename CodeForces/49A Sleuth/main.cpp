#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  string consonants = "BCDFGHJKLMNPQRSTVWXZ";
  string vowels = "AEIOUY";
  getline(cin, s);
  int n = s.size();
  for (int i = n - 1; i >= 0; i--) {
    for (int j = 0; j < 20; j++) {
      if (toupper(s[i]) == consonants[j]) {
        cout << "NO";
        return 0;
      }
    }
    for (int j = 0; j < 6; j++) {
      if (toupper(s[i]) == vowels[j]) {
        cout << "YES";
        return 0;
      }
    }
  }
  return 0;
}
