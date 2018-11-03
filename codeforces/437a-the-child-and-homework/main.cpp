#include <iostream>

using namespace std;

string check(int a, int b, int c, int d) {
  int aN = 0, bN = 0, cN = 0, dN =0;
  int maxN = max(max(a, b), max(c, d));
  if (maxN == a && maxN >= 2 * b && maxN >= 2 * c && maxN >= 2 * d) aN++;
  if (maxN == b && maxN >= 2 * a && maxN >= 2 * c && maxN >= 2 * d) bN++;
  if (maxN == c && maxN >= 2 * a && maxN >= 2 * b && maxN >= 2 * d) cN++;
  if (maxN == d && maxN >= 2 * a && maxN >= 2 * b && maxN >= 2 * c) dN++;
  int minN = min(min(a, b), min(c, d));
  if (minN == a && 2 * minN <= b && 2 * minN <= c && 2 * minN <= d) aN++;
  if (minN == b && 2 * minN <= a && 2 * minN <= c && 2 * minN <= d) bN++;
  if (minN == c && 2 * minN <= a && 2 * minN <= b && 2 * minN <= d) cN++;
  if (minN == d && 2 * minN <= a && 2 * minN <= b && 2 * minN <= c) dN++;
  if (aN == 1 && bN == 0 && cN == 0 && dN == 0) return "A";
  if (aN == 0 && bN == 1 && cN == 0 && dN == 0) return "B";
  if (aN == 0 && bN == 0 && cN == 1 && dN == 0) return "C";
  if (aN == 0 && bN == 0 && cN == 0 && dN == 1) return "D";
  return "E";
}

int main() {
  string a, b, c, d;
  cin >> a >> b >> c >> d;
  int aN = a.size() - 2, bN = b.size() - 2, cN = c.size() - 2, dN = d.size() - 2;
  check(aN, bN, cN, dN) != "E" ? cout << check(aN, bN, cN, dN) : cout << "C";
  return 0;
}
