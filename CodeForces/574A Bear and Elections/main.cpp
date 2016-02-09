#include <iostream>

using namespace std;

int main() {
  int n, a[100], curr = 0, count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    curr = max(curr, a[i]);
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == curr) count++;
  }
  if (a[0] == curr){
    if (count > 1) cout << "1";
    else cout << "0";
    return 0;
  }
  int votes = a[0];
  while (true) {
    curr = 0;
    for (int i = 0; i < n; i++) {
      curr = max(curr, a[i]);
    }
    count = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] == curr) count++;
    }
    if (a[0] + count < curr ) a[0] += count;
    else if (a[0] + count == curr) {
      a[0] += count;
      break;
    }
    else {
      a[0] += curr - a[0] + 1;
      break;
    }
    for (int i = 0; i < n; i++) {
      if (a[i] == curr) a[i]--;
    }
  }
  cout << a[0] - votes;
  return 0;
}
