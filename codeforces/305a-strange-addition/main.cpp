#include <iostream>

using namespace std;

int make(int a, int b, int c, int d) {
  int count = 4;
  if (a == -1) count--;
  if (b == -1) count--;
  if (c == -1) count--;
  if (d == -1) count--;
  return count;
}

int main() {
  int n, a[4] = {-1, -1, -1, -1}, other = -1;
  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    if (x == 0) {
      a[0] = 0;
    }
    else if (x == 100) {
      a[3] = 100;
    }
    else if (x % 10 == 0 && x / 10 > 0) {
      a[2] = x;
    }
    else if (x / 10 == 0) a[1] = x;
    else other = x;
  }
  int numbers = make(a[0], a[1], a[2], a[3]);
  if (numbers == 0) {
    cout << "1\n" << other;
  }
  else if (other != -1 && a[1] == -1 && a[2] == -1) {
    cout << numbers + 1 << '\n';
    for (int i = 0; i < 4; i++) {
      if (a[i] != - 1) cout << a[i] << " ";
    }
    cout << other;
  }
  else {
    cout << numbers << '\n';
    for (int i = 0; i < 4; i++) {
      if (a[i] != - 1) cout << a[i] << " ";
    }
  }
  return 0;
}
