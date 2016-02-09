#include <iostream>
#include <string>

using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  int position = 1, n = t.size();
  for (int i = 0; i < n; i++) {
    if (t[i] == s[position]) position++;
  }
  cout << position;
  return 0;
}
