/*
ID: sbakic
PROG: dualpal
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int check(int number, int base) {
  char map[11] = "0123456789";
  int digits[20], i = 0;
  while (number) {
    digits[i++] = map[number % base] - '0';
    number /= base;
  }
  for (int j = 0; j < i; j++) {
    if (digits[j] != digits[i - 1 - j]) return 0;
  }
  return 1;
}

int main() {
  ofstream fout ("dualpal.out");
  ifstream fin ("dualpal.in");
  int n, s, count;
  fin >> n >> s;
  for (int i = s + 1; n > 0; i++) {
    count = 0;
    count += check(i, 2);
    count += check(i, 3);
    count += check(i, 4);
    count += check(i, 5);
    count += check(i, 6);
    count += check(i, 7);
    count += check(i, 8);
    count += check(i, 9);
    count += check(i, 10);
    if (count >= 2) {
      fout << i << endl;
      n--;
    }
  }
  return 0;
}
