#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int a, b, c;
  cin >> a >> b >> c;
  for (int i = 0; i * a <= c; i++)
    if ((c - i * a) % b == 0) {
      cout << "Yes";
      return 0;
    }
  cout << "No";
  return 0;
}
