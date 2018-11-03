#include <bits/stdc++.h>

using namespace std;

int main() {
  double ans, curr = 0;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    curr += x;
  }
  cout << curr / n ;
  return 0;
}
