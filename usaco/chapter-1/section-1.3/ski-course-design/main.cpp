/*
ID: sbakic
PROG: skidesign
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
  ofstream fout ("skidesign.out");
  ifstream fin ("skidesign.in");
  int n, a[1000], count, total = 1000000000;
  fin >> n;
  for (int i = 0; i < n; i++) {
    fin >> a[i];
  }
  sort(a, a + n);
  for (int i = 0; i <=83; i++) {
    count = 0;
    for (int j = 0; j < n; j++) {
      if (a[j] < i) {
        count += (i - a[j]) *(i - a[j]);
      }
      else if (a[j] > i + 17) {
        count += (a[j] - i - 17) *(a[j] - i - 17);
      }
    }
    total = min(total, count);
  }
  fout << total << endl;
  return 0;
}
