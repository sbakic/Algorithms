#include <iostream>

using namespace std;

int main() {
  int n, k, a[100], maxPebbles = -1, minPebbles = 1001;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    maxPebbles = max(maxPebbles, a[i]);
    minPebbles = min(minPebbles, a[i]);
  }
  if (maxPebbles - minPebbles > k) cout << "NO";
  else {
    cout << "YES" << '\n';
    for (int i = 0; i < n; i++) {
      int c = 1,j = 1;
      while (j <= a[i]) {
        if (j > maxPebbles - k + 1) c++;
        cout << c << " ";
        j++;
      }
      cout << '\n';
    }
  }
  return 0;
}
