#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  while (n--) {
    int a;
    cin >> a;
    if (a == 1) {
      cout << "-1";
      return 0;
    }
  }
  cout << "1";
  return 0;
}
