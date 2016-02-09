#include <iostream>
#include <cctype>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    bool check = false;
    int n, index = -1;
    cin >> n;
    string s[100];
    for (int i = 0; i < n; i++) {
      cin >> s[i];
      for (int j = 0; j < s[i].size(); j++) {
        if (isalpha(s[i][j])) {
          check = true;
          index = i;
        }
      }
    }
    if (!check) {
      for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
      }
    }
    else {
      for (int i = 0; i < n; i++) {
        if (index == i) {
          for (int j = i + 1; j < n; j++) {
            cout << s[j] << " ";
          }
          break;
        }
      }
      cout << s[index] << " ";
      for (int i = 0; i < index; i++) {
        cout << s[i] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}
