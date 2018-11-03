#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  string s, alphabet = "qwertyuiopasdfghjklzxcvbnm";
  cin >> t;
  while (t--) {
    cin >> s;
    int length = s.size();
    for (int i = 0; i < 26; i++) {
      int countLetter = 0, countOther = 0;
      for (int j = 0; j < length; j++) {
        if (alphabet[i] == s[j]) countLetter++;
        else countOther++;
      }
      if (countLetter == countOther) {
        cout << "YES\n";
        break;
      }
      if (i == 25) cout << "NO\n";
    }
  }
  return 0;
}
