#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < 2; i++) {
    if (s[i] != s[4 - i]) {
      printf("NE");
      return 0;
    }
  }
  printf("DA");
  return 0;
}
