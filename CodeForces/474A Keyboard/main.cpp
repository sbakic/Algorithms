#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
  string s, keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
  char c;
  scanf("%c", &c);
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < keyboard.size(); j++) {
      if (c == 'R') {
        if (s[i] == keyboard[j]) {
          s[i] = keyboard[j - 1];
          break;
        }
      }
      else if (c == 'L') {
        if (s[i] == keyboard[j]) {
          s[i] = keyboard[j + 1];
          break;
        }
      }
    }
  }
  cout << s;
  return 0;
}
