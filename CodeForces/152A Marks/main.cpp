#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
  int n, m, maxGrade[101], count = 0;
  char c[101][101];
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%s", c[i]);
  }
  for (int i = 0; i < m; i++) {
    for (int j  = 0; j < n; j++) {
      maxGrade[i] = max(maxGrade[i], (int)c[j][i]);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if ((int)c[i][j] == maxGrade[j]) {
        count++;
        break;
      }
    }
  }
  printf("%d", count);
  return 0;
}
