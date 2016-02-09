#include <iostream>
#include <string>

using namespace std;

int main() {
  string a, b;
  int count = 0, start = -1, end = -1;
  cin >> a >> b;
  int n = a.size(), m = b.size();
  for (int i = 0; i < n && n == m; i++) {
    if (a[i] != b[i]) {
      count++;
      if (start == -1) start = i;
      else end = i;
    }
  }
  if (count == 2) {
    swap(a[start], a[end]);
    if (a.compare(b) == 0) cout << "YES";
    else cout << "NO";
  }
  else cout << "NO";
  return 0;
}
