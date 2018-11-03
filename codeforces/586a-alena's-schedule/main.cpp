#include <iostream>

using namespace std;

int main() {
  int n, a[100], count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == 1 || (a[i - 1] == 1 && a[i] == 0 && a[i + 1] == 1)) count++;
  }
  cout << count;
  return 0;
}
