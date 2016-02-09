#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int j = n - 1 - i;
    while (j) {
      cout << " ";
      j--;
    }
    int k = i + 1;
    while (k) {
      cout << "#";
      k--;
    }
    cout << '\n';
  }
  return 0;
}
