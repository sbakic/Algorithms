#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int first = ((s[0] - '0') * 10 + (s[1] - '0'))* 60 + (s[3] - '0') * 10 + (s[4] - '0');
  int second = ((t[0] - '0') * 10 + (t[1] - '0'))* 60 + (t[3] - '0') * 10 + (t[4] - '0');
  int time = (first < second) ? 24 * 60 - abs(first - second) : abs(first - second);
  (time / 60) < 10 ? printf("0%d", time / 60) : printf("%d", time / 60);
  cout << ":";
  (time % 60) < 10 ? printf("0%d", time % 60) : printf("%d", time % 60);
  return 0;
}
