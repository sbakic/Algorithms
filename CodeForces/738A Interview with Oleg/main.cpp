#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, curr = "";
  int n;
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'o') {
      if (s[i + 1] == 'g' && s[i + 2] == 'o') {
        curr = "ogo";
        i += 2;
        cout << "***";
      }
      else cout << s[i];
    }
    else if (s[i] == 'g') {
      if (curr == "ogo" && s[i + 1] == 'o') i++;
      else {
        curr = "";
        cout << s[i];
      }
    }
    else {
      curr = "";
      cout << s[i];
    }
  }
  return 0;
}
