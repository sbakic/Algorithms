#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
  int length = s.size();
  if (length == 1) return false;
  for(int i = 0; i < length / 2; i++) {
    if (s[i] != s[length - 1 - i]) return false;
  }
  return true;
}

int main() {
  string s, check;
  cin >> s;
  int length = s.size();
  for(int i = 0; i <= length; i++) {
    for (char c = 'a'; c <= 'z'; c++) {
      if (i == 0) {
        check = c + s;
      }
      else if (i == length) {
        check = s + c;
      }
      else {
        check = s.substr(0, i) + c + s.substr(i, length);
      }
      if(isPalindrome(check)) {
        cout << check;
        return 0;
      }
    }
  }
  cout <<"NA";
  return 0;
}
