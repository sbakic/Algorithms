#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  cout << (n + 1) * 26 - n;
  return 0;
}
