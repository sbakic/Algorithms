#include <iostream>

using namespace std;

char make(char a, char b) {
  for (char i = 'a'; i <= 'z'; i++) {
    if (a != i && b != i) return i;
  }
  return 0;
}

int main() {
  string a, b, c = "";
  int n, t, same = 0, different = 0;
  cin >> n >> t >> a >> b;
  for (int i = 0; i < n; i++) {
    if (a[i] == b[i]) same++;
    else different++;
  }
  if (different <= t) {
    t -= different;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        c += make(a[i], b[i]);
      }
      else if (t > 0 && a[i] == b[i]) {
        c += make(a[i], b[i]);
        t--;
      }
      else if (a[i] == b[i]) c += a[i];
    }
  }
  else if (t != 0 && (different + 1) / 2 <= t) {
    bool first = true;
    for (int i = 0 ; i < n; i++) {
      if (different != t && a[i] != b[i]) {
        if (first) {
          c += a[i];
          first = false;
        }
        else {
          c += b[i];
          first = true;
          t--;
          different -= 2;
        }
      }
      else if (different == t && a[i] != b[i]) {
        c += make(a[i], b[i]);
        different--;
        t--;
      }
      else if (a[i] == b[i]) c += a[i];
    }
  }
  else c = "-1";
  cout << c;
  return 0;
}
