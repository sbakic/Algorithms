#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  int a, b, count = 0, mid = 0;
  cin >> a >> b;
  for (int i = 1; i <= 6; i++) {
    if (abs(a - i) < abs(b - i)) count++;
  }
  for (int i = 1; i <= 6; i++) {
    if (abs(a - i) == abs(b - i)) mid++;
  }
  cout << count << " " << mid << " " << 6 - (count + mid);
  return 0;
}
