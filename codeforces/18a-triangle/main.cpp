#include <iostream>
#include <cmath>

using namespace std;

bool check(double a, double b, double c) {
  return abs(a * a - (b * b  + c * c)) < 1;
}

bool checkRight(int x1, int y1, int x2, int y2, int x3, int y3) {
  double a = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  double b = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
  double c = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
  if (a + b > c && a + c > b && b + c > a) {
    if (check(a, b, c)) return true;
    if (check(b, a, c)) return true;
    if (check(c, a, b)) return true;
  }
  return false;
}

bool change(int x1, int y1, int x2, int y2, int x3, int y3) {
  if (checkRight(x1, y1 + 1, x2, y2, x3, y3)) return true;
  if (checkRight(x1 - 1, y1, x2, y2, x3, y3)) return true;
  if (checkRight(x1, y1, x2, y2, x3, y3)) return true;
  if (checkRight(x1 + 1, y1, x2, y2, x3, y3)) return true;
  if (checkRight(x1, y1 - 1, x2, y2, x3, y3)) return true;
  return false;
}

bool checkAlmost(int x1, int y1, int x2, int y2, int x3, int y3) {
  if (change(x1, y1, x2, y2, x3, y3)) return true;
  if (change(x2, y2, x1, y1, x3, y3)) return true;
  if (change(x3, y3, x1, y1, x2, y2)) return true;
  return false;
}

int main() {
  int x1, y1, x2, y2, x3, y3;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  if (checkRight(x1, y1, x2, y2, x3, y3)) cout << "RIGHT";
  else if (checkAlmost(x1, y1, x2, y2, x3, y3)) cout << "ALMOST";
  else cout << "NEITHER";
  return 0;
}
