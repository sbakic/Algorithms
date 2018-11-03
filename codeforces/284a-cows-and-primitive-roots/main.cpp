#include <iostream>

using namespace std;

int main() {
  int p, count = 0;
  cin >> p;
  for (int i = 1, j; i < p; i++) {
    int k = i;
    for (j = 0; j < p - 2; j++) {
      if ((k - 1) % p == 0) break;
      k = (k * i) % p;
    }
    if (j == p - 2 && (k - 1) % p == 0) count++;
  }
  cout << count;
  return 0;
}
