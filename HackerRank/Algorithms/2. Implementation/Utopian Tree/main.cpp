#include <iostream>

using namespace std;

int height(int n) {
  int height = 1;
  for (int i = 1; i <= n; i++) {
    (i % 2 == 1) ? height *= 2 : height++;
  }
  return height;
}
int main() {
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    cout << height(n) << endl;
  }
  return 0;
}
