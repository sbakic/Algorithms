#include <iostream>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  for (int i = 1, j = 2 * n + 1; j <= 4 * n; i++, j++) {
   if (j <= m) cout << j << " ";
   if (i <= m) cout << i << " ";
  }
  return 0;
}
