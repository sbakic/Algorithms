/*
ID: sbakic
PROG: palsquare
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

bool isPalindrome(char *c) {
  int length = strlen(c);
  for (int i = 0; i < length / 2; i++) {
    if (c[i] != c[length - i - 1]) return false;
  }
  return true;
}

void numberToString(int number, char *c, int base){
	char map[] = {"0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char dst[20];
	int i = 0;
	while (number) {
		dst[i++] = map[number % base];
		number /= base;
	}
	int length = i;
	for (i = length - 1; i >= 0; i--) {
		c[length - 1 - i] = dst[i];
	}
	c[length] = '\0';
}


int main() {
  ofstream fout ("palsquare.out");
  ifstream fin ("palsquare.in");
  char digits[20], digitsSquare[20];
  int n;
  fin >> n;
  for (int i = 1; i <= 300; i++) {
    numberToString(i * i, digitsSquare, n);
		if (isPalindrome(digitsSquare)) {
      numberToString(i, digits, n);
			fout << digits << " " << digitsSquare << endl;
		}
  }
  return 0;
}
