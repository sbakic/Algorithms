#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    if (x == 1) {
      cout << "HARD";
      return 0;
    }
  }
  cout << "EASY";
  return 0;
}
