#include <iostream>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), modulo = 1e6 + 3, ans = 0;
  for (int i = 0; i < n; i++) {
    int curr;
    switch (s[i]) {
      case '>': curr = 8; break;
      case '<': curr = 9; break;
      case '+': curr = 10; break;
      case '-': curr = 11; break;
      case '.': curr = 12; break;
      case ',': curr = 13; break;
      case '[': curr = 14; break;
      case ']': curr = 15; break;
    }
    ans = ans * 16 + curr;
    ans %= modulo;
  }
  cout << ans;
  return 0;
}

