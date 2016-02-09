#include <iostream>

using namespace std;

int main() {
  int k, d;
  cin >> k >> d;
  if (d == 0 && k == 1) cout << "0";
  else if (d == 0 && k > 1) cout << "No solution";
  if (d > 0) {
    cout << d;
    for (int i = 0; i < k - 1; i++) {
      cout << "0";
    }
  }
  return 0;
}
