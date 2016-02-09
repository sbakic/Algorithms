#include <iostream>

using namespace std;

int main() {
  int k;
  string s;
  cin >> s >> k;
  int n = s.size();
  if (n % k != 0) {
    cout << "NO";
    return 0;
  }
  int length = n / k;
  for (int i = 0; i < n; length == 1? i++ : i += length / 2) {
    if (s[i] != s[(i / length) * length + length - 1 - (i % length)]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}
