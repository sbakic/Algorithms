#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  switch (n) {
  case 6: cout << "espeon"; break;
  case 7:
    if (s[0] == 'j' || s[1] == 'o' || s[3] == 't') {
      cout << "jolteon";
    }
    else if (s[0] == 'f' || s[1] == 'l' && s[3] == 'r' || s[1] == 'l' && s[2] == 'a'  && s[0] == 'f' || s[2] == 'a' && s[3] == 'r') {
      cout << "flareon";
    }
    else if (s[0] == 'u' || s[1] == 'm' || s[2] == 'b') {
      cout << "umbreon";
    }
    else if (s[0] == 'l' || s[1] == 'e' || s[3] == 'f') {
      cout << "leafeon";
    }
    else if (s[0] == 's' || s[1] == 'y' || s[3] == 'v') {
      cout << "sylveon";
    }
    else {
     cout << "glaceon";
    }
  break;
  case 8: cout << "vaporeon"; break;
  }
  return 0;
}
