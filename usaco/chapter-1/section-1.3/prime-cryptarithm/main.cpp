/*
ID: sbakic
PROG: crypt1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

bool binary_search(int digit, int a[], int n) {
  int left = 0;
  int right = n - 1;
  while (left <= right) {
    int index = left + (right - left) / 2;
    if (a[index] == digit) return true;
    if (a[index] > digit) {
      right = index - 1;
    }
    else {
      left = index + 1;
    }
  }
  return false;
}

bool find(int product, int a[], int n) {
  while (product) {
    int digit = product % 10;
    if (!binary_search(digit, a, n)) return false;
    product /= 10;
  }
  return true;
}

int main() {
  ofstream fout ("crypt1.out");
  ifstream fin ("crypt1.in");
  int n, a[10], count = 0;
  fin >> n;
  for (int i = 0; i < n; i++) {
    fin >> a[i];
  }
  sort(a, a + n);
  for (int i = 100; i <= 999; i++) {
    for (int j = 11; j <= 99; j++) {
      if (binary_search(i / 100, a, n) && binary_search((i / 10) % 10, a, n) && binary_search(i % 10, a, n) && binary_search(j / 10, a, n) && binary_search(j % 10, a, n)) {
        int p1 = i * (j/10);
        int p2 = i * (j%10);
        if (p1 / 1000 != 0 || p1 / 10000 != 0 && p1 / 100000 != 0 || p2 / 1000 != 0 || p2 / 10000 != 0 || p2 / 100000 != 0 || p2 == 0) continue;
        if(find(p1, a, n) && find(p2, a, n)) {
          int sum = p1 + p2 * 10;
          if (find(sum, a, n)) count++;
        }
      }
    }
  }
  fout << count << endl;
  return 0;
}
