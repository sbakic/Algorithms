#include <iostream>
#include <string>

using namespace std;

int main() {
  int count = 0;
  string s, letters = "qwertyuiopasdfghjklzxcvbnm";
  getline(cin, s);
  int length = s.size();
  for (int i = 0; i < length; i++) {
    for (int j = 0; j < 26; j++) {
       if (s[i] == letters[j]) {
        count++;
        letters[j] = '0';
      }
    }
  }
  cout << count;
  return 0;
}
