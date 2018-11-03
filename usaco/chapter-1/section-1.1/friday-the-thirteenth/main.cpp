/*
ID: sbakic
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int day[7];

int main() {
  ofstream fout ("friday.out");
  ifstream fin ("friday.in");
  int n, numberOfDay = 0;
  fin >> n;
  for (int i = 1900; i < 1900 + n; i++) {
    for (int j = 1; j < 13; j++) {
      int days;
      switch (j) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: days = 31; break;
        case 4: case 6: case 9: case 11: days = 30; break;
        case 2: (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))? days = 29: days = 28; break;
      }
      for (int k = 1; k < days + 1; k++, numberOfDay++) {
        numberOfDay %= 7;
        if (k == 13) day[numberOfDay]++;
      }
    }
  }
  fout << day[5] << " " << day[6] << " ";
  for (int i = 0; i < 5; i++) {
    if (i == 4) fout << day[i] << endl;
    else  fout << day[i] << " ";
  }
  return 0;
}
