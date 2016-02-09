#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

int check(int fibonacci[], int index[], int number) {
  if (number == 1 && index[1] != 10000001) return 2;
  for (int i = 0; i < 21; i++) {
    if (number == fibonacci[i]) return i;
  }
  return -1;
}

int main() {
  int n, m, number, length = 0, maxL = 0, fibonacci[21] = {0, 1}, index[21] = {10000001, 10000001};
  for (int i = 2; i < 21; i++) {
    fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    index[i] = 10000001;
  }
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &number);
    int foundI = check(fibonacci, index, number);
    if (foundI > 0) {
      index[foundI] = min(index[foundI], i);
    }
  }
  for (int i = 0; i < 21; i++) {
    if (index[i] < 10000001) {
      length++;
      if (i == 20) {
        maxL = 20;
        break;
      }
    }
    else {
      maxL = max(maxL, length);
      length = 0;
    }
  }
  length = 0;
  printf("%d\n", maxL);
  for (int i = 0; i < 21; i++) {
    if (index[i] < 10000001) {
      length++;
      if (i == 20) {
        if (length == maxL) {
          for (int j = i - length + 1; j <= i; j++) {
            printf("%d ", index[j]);
          }
          return 0;
        }
      }
    }
    else {
      if (length == maxL) {
        for (int j = i - length; j < i; j++) {
          printf("%d ", index[j]);
        }
        return 0;
      }
      length = 0;
    }
  }
  return 0;
}
