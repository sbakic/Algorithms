#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), four = 0, seven = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] == '4') four++;
    if (s[i] == '7') seven++;
  }
  if (seven > four) cout << "7";
  else if (four > 0) cout << "4";
  else cout << "-1";
  return 0;
}
