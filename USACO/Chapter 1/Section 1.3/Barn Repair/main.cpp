/*
ID: sbakic
PROG: barn1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
  ofstream fout ("barn1.out");
  ifstream fin ("barn1.in");
  int m, s, c, a[200], maxs[50], total = 0;
  pair<int, int> difference[200];
  fin >> m >> s >> c;
  for (int i = 0; i < c; i++) {
    fin >> a[i];
  }
  if (m > c) {
    fout << c << endl;
    return 0;
  }
  sort(a, a + c);
   if (m == 1) {
    fout << a[c - 1] - a[0] + 1 << endl;
    return 0;
  }
  for (int i = 0; i < c - 1; i++) {
    difference[i].first = a[i + 1] - a[i];
    difference[i].second = i;
  }
  sort(difference, difference + c - 1);
  for (int i = c - 2, j = 0; j < m - 1 ; i--, j++) {
    maxs[j] = difference[i].second;
  }
  sort(maxs, maxs + m - 1);
  for (int i = 0; i < m - 1; i++) {
    if (i == 0) {
      total += a[maxs[i]] - a[0] + 1;
      continue;
    }
    total += a[maxs[i]] - a[maxs[i - 1] + 1] + 1;
  }
  fout << total + a[c - 1] - a[maxs[m - 2] + 1] + 1 << endl;
  return 0;
}
