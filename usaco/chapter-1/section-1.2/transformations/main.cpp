/*
ID: sbakic
PROG: transform
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

char c[10][10], d[10][10];

void copyXtoY(char x[10][10], char y[10][10], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      y[i][j] = x[i][j];
    }
  }
}

bool check(char x[10][10], char y[10][10], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (x[i][j] != y[i][j])
        return false;
    }
  }
  return true;
}

void rotate90(char a[10][10], char x[10][10], int n) {
  int z = n - 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      x[j][z] = a[i][j];
    }
    z--;
  }
}

void rotate180(char a[10][10], char x[10][10], int n) {
  for (int i = 0, k = n - 1; i < n; i++, k--) {
    for (int j = 0, l = n - 1; j < n; j++, l--) {
      x[k][l] = a[i][j];
    }
  }
}

void rotate270(char a[10][10], char x[10][10], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0, z = n - 1; j < n; j++, z--) {
      x[z][i] = a[i][j];
    }
  }
}

void reflectHorizontally(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n / 2; j++) {
      swap(c[i][j], c[i][n - 1 - j]);
    }
  }
}

bool case1(char a[10][10], char b[10][10], char c[10][10], int n) {
  rotate90(a, c, n);
  if (check(b, c, n)) return true;
  copyXtoY(a, c, n);
  return false;
}

bool case2(char a[10][10], char b[10][10], char c[10][10], int n) {
  rotate180(a, c, n);
  if (check(b, c, n)) return true;
  copyXtoY(a, c, n);
  return false;
}

bool case3(char a[10][10], char b[10][10], char c[10][10], int n) {
  rotate270(a, c, n);
  if (check(b, c, n)) return true;
  copyXtoY(a, c, n);
  return false;
}

bool case4(char a[10][10], char b[10][10], int n) {
  reflectHorizontally(n);
  if (check(b, c, n)) return true;
  copyXtoY(a, c, n);
  return false;
}

bool case5(char a[10][10], char b[10][10], int n) {
  reflectHorizontally(n);
  if (case1(c, b, d, n)) return true;
  if (case2(c, b, d, n)) return true;
  if (case3(c, b, d, n)) return true;
  copyXtoY(c, d, n);
  return false;
}

int main() {
  ofstream fout ("transform.out");
  ifstream fin ("transform.in");
  char a[10][10], b[10][10];
  string s;
  int n;
  fin >> n;
  for (int i = 0; i < n; i++) {
    fin >> s;
    for (int j = 0; j < n; j++) {
      a[i][j] = c[i][j] = s[j];
    }
  }
  for (int i = 0; i < n; i++) {
    fin >> s;
    for (int j = 0; j < n; j++) {
      b[i][j] = s[j];
    }
  }
  if (case1(a, b, c, n))
    fout << "1" << endl;
  else if (case2(a, b, c, n))
    fout << "2" << endl;
  else if (case3(a, b, c, n))
    fout << "3" << endl;
  else if (case4(a, b, n))
    fout << "4" << endl;
  else if (case5(a, b, n))
    fout << "5" << endl;
  else if (check(a, b, n))
    fout << "6" << endl;
  else fout << "7" << endl;
  return 0;
}
