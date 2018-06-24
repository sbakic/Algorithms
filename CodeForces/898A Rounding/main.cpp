#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  cout << (n % 10 > 5 ? n + 10 - n % 10 : n - n % 10);
  return 0;
}