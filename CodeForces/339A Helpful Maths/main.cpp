#include <string>
#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), n1 = 0, n2 = 0, n3 = 0;
  for(int i = 0; i < n; i++) {
    if (s[i] - '0' == 1) n1++;
    if (s[i] - '0' == 2) n2++;
    if (s[i] - '0' == 3) n3++;
  }
  int length = n1 + n2 + n3;
  for (int i = 1; i <= n1; i++) {
    if (i == length) cout << "1";
    else cout << "1+";
  }
  for (int i = 1; i <= n2; i++) {
    if (i + n1 == length) cout << "2";
    else cout << "2+";
  }
   for (int i = 1; i <= n3; i++) {
    if (i + n1 + n2 == length) cout << "3";
    else cout << "3+";
  }
  return 0;
}
