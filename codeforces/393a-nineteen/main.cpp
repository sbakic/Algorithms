#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  cin >> s;
  int n = s.size(), N = 0, I = 0, E = 0, T = 0;
  for (int i = 0; i < n; i++) {
    switch (s[i]) {
      case 'n': N++; break;
      case 'i': I++; break;
      case 'e': E++; break;
      case 't': T++; break;
    }
  }
  cout << min(min((N - 1) / 2, I), min(E / 3, T));
  return 0;
}
