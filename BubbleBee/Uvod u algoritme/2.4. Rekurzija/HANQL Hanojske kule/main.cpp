#include <stdio.h>

void towerOfHanoi(int numberOfDisk, char fromRod, char toRod, char overRod) {
  if (numberOfDisk == 1) {
    printf("%c %c %d\n", fromRod, toRod, numberOfDisk);
  }
  else {
    towerOfHanoi(numberOfDisk - 1, fromRod, overRod, toRod);
    printf("%c %c %d\n", fromRod, toRod, numberOfDisk);
    towerOfHanoi(numberOfDisk - 1, overRod, toRod, fromRod);
  }
}

int myPow(int a, int n) {
  for (int i = 1; i < n; i++) {
    a *= 2;
  }
  return a;
}

int main() {
  int n;
  scanf("%d", &n);
  printf("%d %d\n", n, myPow(2, n) - 1);
  towerOfHanoi(n, 'A', 'C', 'B');
  return 0;
}
