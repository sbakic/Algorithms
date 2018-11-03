#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  bool a = true, b = false, c = false, d = false;
  for (int i = 0; i < n; i++) {
    if (a) {
      printf("a");
      a = false;
      b = true;
    }
    else if (b) {
      printf("b");
      b = false;
      c = true;
    }
    else if (c) {
      printf("c");
      c = false;
      d = true;
    }
    else if (d) {
      printf("d");
      d = false;
      a = true;
    }
  }
  return 0;
}
