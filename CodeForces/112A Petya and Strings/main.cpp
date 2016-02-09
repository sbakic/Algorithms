#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;
  cin >> a >> b;
  int n = a.size();
  for (int i = 0; i < n; i++) {
    if (toupper(a[i]) > toupper(b[i])) {
      cout << "1";
      return 0;
    }
    if (toupper(b[i]) > toupper(a[i])) {
      cout << "-1";
      return 0;
    }
  }
  cout << "0";
}
