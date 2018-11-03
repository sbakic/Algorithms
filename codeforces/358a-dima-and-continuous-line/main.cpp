#include <iostream>

using namespace std;

int main() {
  int n, a[1000], right,  left;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    left = right = 0;
    for (int j = i + 2; j < n; j++) {
      if ((a[j] > a[i] && a[j] > a[i+1]) || (a[j] < a[i] && a[j] < a[i+1])) right++;
      else left++;
      if (left > 0 && right > 0) {
      cout << "yes";
      return 0;
      }
    }
  }
  cout << "no";
  return 0;
}
