#include <stdio.h>

int a[30],b[30];
int A, B, n;

int value(int a[], int A) {
  int val = 0;
  for(int i = n; i >= 0; i--) {
    val = val * A + a[i];
  }
  return val;
}

int digits(int value, int B) {
  int i = -1;
  while (value > 0) {
    i++;
    b[i] = value % B;
    value /= B;
  }
  return i;
}

int main() {
  scanf("%d %d",&A ,&n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  int decValue = value(a,A);
  scanf("%d", &B);
  int range = digits(decValue,B);
  printf("%d\n", range + 1);
  for(int i = 0; i < range + 1; i++) {
    printf("%d ", b[i]);
  }
  return 0;
}
