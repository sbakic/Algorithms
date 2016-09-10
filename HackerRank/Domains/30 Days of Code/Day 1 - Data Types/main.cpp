#include <bits/stdc++.h>

using namespace std;

int main() {
  int i = 4;
  double d = 4.0;
  string s = "HackerRank ";
  int a;
  double b;
  string c;
  cin >> a >> b;
  cin.ignore();
  getline(cin, c);
  cout << i + a << '\n';
  cout << setprecision(1) << fixed << d + b << '\n';
  cout << s << c;
  return 0;
}
