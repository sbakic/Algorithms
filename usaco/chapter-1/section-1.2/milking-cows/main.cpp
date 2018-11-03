/*
ID: sbakic
PROG: milk2
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool cows[1000001];

int main() {
  ofstream fout ("milk2.out");
  ifstream fin ("milk2.in");
  int n, a, b, max = 0, min = 1000001, maxMilked = 0, maxNotMilked = 0;
  fin >> n;
  for (int i = 0; i < n; i++) {
    fin >> a >> b;
    for (int j = a; j < b; j++) {
      cows[j] = true;
    }
    max = (b > max)? b: max;
    min = (a < min)? a: min;
  }
  for (int i = min; i < max;) {
    int count = 0;
    if (cows[i]) {
      while (cows[i]) {
        count++;
        i++;
      }
      maxMilked = (count > maxMilked)? count: maxMilked;
    }
    else {
      while (!cows[i]) {
        count++;
        i++;
      }
      maxNotMilked = (count > maxNotMilked)? count: maxNotMilked;
    }
  }
  fout << maxMilked << " " << maxNotMilked << endl;
  return 0;
}
