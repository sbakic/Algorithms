#include <stdio.h>

int h[2][100], a[2][100], fouls[2][100];

int main() {
  char home[21], away[21], team, card;
  int n, minute, number;
  scanf("%s %s %d", &home, &away, &n);
  while (n--) {
    scanf("%d %c %d %c", &minute, &team, &number, &card);
    if (team == 'h') {
      if(card == 'y') {
        if (h[0][number] == 2 || h[0][number] == 3) continue;
        h[0][number]++;
        h[1][number] = minute;
      }
      else {
        if (h[0][number] == 2 || h[0][number] == 3) continue;
        h[0][number] += 2;
        h[1][number] = minute;
      }
    }
    else {
      if(card == 'y') {
        if (a[0][number] == 2 || a[0][number] == 3) continue;
        a[0][number]++;
        a[1][number] = minute;
      }
      else {
        if (a[0][number] == 2 || a[0][number] == 3) continue;
        a[0][number] += 2;
        a[1][number] = minute;
      }
    }
  }
  for (int i = 1; i <= 99; i++) {
    if (h[0][i] >= 2) {
      fouls[0][h[1][i]] = 1;
      fouls[1][h[1][i]] = i;
    }
    if (a[0][i] >= 2) {
      fouls[0][a[1][i]] = 2;
      fouls[1][a[1][i]] = i;
    }
  }
  for (int i = 1; i <= 99; i++) {
    if (fouls[0][i] == 1) {
      printf("%s %d %d\n", home, fouls[1][i], i);
    }
    if (fouls[0][i] == 2) {
      printf("%s %d %d\n", away, fouls[1][i], i);
    }
  }
  return 0;
}
