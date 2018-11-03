#include <iostream>

using namespace std;

int main() {
  int na, ma, nb, mb, a[50][50], b[50][50], overlapX, overlapY, sum = 0;
  scanf("%d %d", &na, &ma);
  for (int i = 0; i < na; i++) {
    for (int j = 0; j < ma; j++) {
      scanf("%1d", &a[i][j]);
    }
  }
  scanf("%d %d", &nb, &mb);
  for (int i = 0; i < nb; i++) {
    for (int j = 0; j < mb; j++) {
      scanf("%1d", &b[i][j]);
    }
  }
  for (int x = -50; x <= 50; x++) {
    for (int y = -50; y <= 50; y++) {
      int curr = 0;
      for (int i = 0; i < na; i++) {
        for (int j = 0; j < ma; j++) {
          if (i + x >= 0 && i + x < nb && j + y >= 0 && j + y < mb) curr += a[i][j] * b[i + x][j + y];
        }
      }
      if (curr >= sum) {
        sum = curr;
        overlapX = x;
        overlapY = y;
      }
    }
  }
  printf("%d %d", overlapX, overlapY);
  return 0;
}
