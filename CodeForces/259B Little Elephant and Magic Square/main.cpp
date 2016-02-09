#include <iostream>

using namespace std;

int main() {
  int a[9], maxValue;
  for (int i = 0; i < 9; i++) {
    cin >> a[i];
  }
  maxValue = max(a[2] + a[6], max(a[1] + a[2], a[6] + a[7]));
  a[0] = maxValue - (a[1] + a[2]);
  a[4] = maxValue - (a[2] + a[6]);
  a[8] = maxValue - (a[6] + a[7]);
  while (a[0] + a[4] + a[8] != a[0] + a[1] + a[2]) {
    a[0]++;
    a[4]++;
    a[8]++;
  }
  for (int i = 0 ; i < 9; i++) {
    if (i == 3 || i == 6) cout << '\n';
    cout << a[i] << " ";
  }
  return 0;
}
