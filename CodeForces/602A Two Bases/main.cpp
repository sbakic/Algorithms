#include <iostream>

using namespace std;

long long make(int a[], int n, int base) {
  long long number = 0;
  for (int i = 0; i < n; i++) {
    number = number * base + a[i];
  }
  return number;
}

int main() {
  int n, x, m, y, a[10], b[10];
  long long first = 0, second = 0;
  cin >> n >> x;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> m >> y;
  for (int i = 0; i < m; i++) {
    cin >> b[i];
  }
  if (x != 10) {
     first = make(a, n, x);
  }
  else {
    for (int i = 0; i < n; i++) {
      first *= 10;
      first += a[i];
    }
  }
  if (y != 10) {
    second = make(b, m, y);
  }
  else {
    for (int i = 0; i < m; i++) {
      second *= 10;
      second += b[i];
    }
  }
  if (first == second) cout << "=";
  if (first > second) cout << ">";
  if (first < second) cout << "<";
  return 0;
}
