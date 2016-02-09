#include <stdio.h>
#include <stdlib.h>

int main(){
  int n = 5, a[5][5], indexX, indexJ;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
      if (a[i][j] == 1) {
        indexX = i;
        indexJ = j;
      }
    }
  }
  printf("%d", abs(indexX - 2) + abs(indexJ - 2));
  return 0;
}
