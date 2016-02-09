#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
      s[i] = ' ';
      s[i + 1] = ' ';
      s[i + 2] = ' ';
      i += 2;
    }
  }
  bool first = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == ' ' && !first) continue;
    if (s[i] != ' ') {
      first = true;
      cout << s[i];
    }
    if (s[i] == ' ' && first && s[i - 1] != ' ') {
      cout << s[i];
    }
  }
  return 0;
}
