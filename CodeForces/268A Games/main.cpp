#include <iostream>

using namespace std;

int main() {
  int n, a[30], h[30], count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> h[i] >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (h[i] == a[j]) count++;
      if (a[i] == h[j]) count++;
    }
  }
  cout << count;
  return 0;
}
