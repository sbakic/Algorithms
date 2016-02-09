#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  bool end = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'A' && s[i + 1] == 'B') {
      for (int j = i + 2; j < n; j++) {
        if (s[j] == 'B' && s[j + 1] == 'A') {
          cout << "YES";
          return 0;
        }
        if (j == n - 1) end = true;
      }
      if (end) break;
    }
  }
  end = false;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'B' && s[i + 1] == 'A') {
      for (int j = i + 2; j < n; j++) {
        if (s[j] == 'A' && s[j + 1] == 'B') {
          cout << "YES";
          return 0;
        }
        if (j == n - 1) end = true;
      }
      if (end) break;
    }
  }
  cout << "NO";
  return 0;
}
