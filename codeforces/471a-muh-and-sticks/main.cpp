#include <stdio.h>

int main() {
  int a[6], b[2], count, I = -1;
  for (int i = 0; i < 6; i++) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < 6; i++) {
    count = 0;
    for (int j = 0; j < 6; j++) {
      if (a[i] == a[j]) count++;
    }
    if (count >= 4) {
        I = a[i];
        break;
      }
  }
  if(I != -1) {
    int z = 0, count = 0;
    for (int i = 0; i < 6; i++) {
      if (a[i] == I && count < 4) {
        a[i] = 0;
        count++;
      }
      else {
        b[z++] = a[i];
      }
    }
    if (b[0] == b[1]) {
      printf("Elephant");
    }
    else {
      printf("Bear");
    }
  }
  else {
    printf("Alien");
  }
  return 0;
}
