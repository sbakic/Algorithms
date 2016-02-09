/*
ID: sbakic
PROG: combo
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int n;

bool check(int number, int dial) {
  return abs(number - dial) <= 2 || abs(number - dial) >= n - 2;
}

int main() {
  ofstream fout ("combo.out");
  ifstream fin ("combo.in");
  int john[3], master[3], count = 0;
  fin >> n >> john[0] >> john[1] >> john[2] >> master[0] >> master[1] >> master[2];
  fin.close();
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      for (int k = 1; k <= n; k++) {
        if (check(i, john[0]) && check(j, john[1]) && check(k, john[2])
        || check(i, master[0]) && check(j, master[1]) && check(k, master[2]))
          count++;
      }
    }
  }
  fout << count << endl;
  return 0;
}
