#include <stdio.h>
#include <iostream>
#include <sstream>

using namespace std;

namespace patch {
  template <typename T> string to_string(const T& n) {
    ostringstream s;
    s << n;
    return s.str();
  }
}

int main() {
  int n, a[3000], count = 0;
  string s;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++) {
    int curr = a[i], index = -1;
    for (int j = i + 1; j < n; j++) {
      if (a[j] < curr) {
        curr = a[j];
        index = j;
      }
    }
    if (curr < a[i]) {
      s += patch::to_string(i);
      s += " ";
      s += patch::to_string(index);
      s += "\n";
      swap(a[i], a[index]);
      count++;
    }
  }
  cout << count << '\n' << s;
  return 0;
}
