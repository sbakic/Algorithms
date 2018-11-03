#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  for (int i = 0; i < n; i++) {
    if (s[i] == 'h') {
      for (int j = i + 1; j < n; j++) {
        if (s[j] == 'e') {
          for (int k = j + 1; k < n; k++) {
            if (s[k] == 'l') {
              for (int l = k + 1; l < n; l++) {
                if (s[l] == 'l') {
                  for (int m = l + 1; m < n; m++) {
                    if (s[m] == 'o') {
                      cout << "YES";
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << "NO";
  return 0;
}
