#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  bool start = false;
  cin >> s;
  int a = s[0] - '0', b = s[1] - '0', c = s[3] - '0', d = s[4] - '0';
  for (int i = (start || i == 23) ? 0 : a * 10 + b; i <= 23; i = ++i % 25) {
    for (int j = (start || j == 60) ? 0 : c * 10 + (d + 1); j <= 59; j = ++j % 61) {
      start = true;
      if (i / 10 == j % 10 && i % 10 == j / 10) {
        (i < 10 && j < 10) ? cout << "0" << i << ":" << "0" << j : (i < 10) ? cout << "0" << i << ":" << j : (j < 10) ? cout << i << ":0" << j : cout << i << ":" << j;
        return 0;
      }
    }
  }
  cout << "00:00";
  return 0;
}
