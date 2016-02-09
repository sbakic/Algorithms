#include <stdio.h>

int n, k, x, a[6];

int main() {
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", &x);
    if (x > a[0]) {
      a[5] = a[4];
      a[4] = a[3];
      a[3] = a[2];
      a[2] = a[1];
      a[1] = a[0];
      a[0] = x;
    }
    else if(x > a[1]) {
      a[5] = a[4];
      a[4] = a[3];
      a[3] = a[2];
      a[2] = a[1];
      a[1] = x;
    }
    else if(x > a[2]){
      a[5] = a[4];
      a[4] = a[3];
      a[3] = a[2];
      a[2] = x;
    }
    else if(x > a[3]){
      a[5] = a[4];
      a[4] = a[3];
      a[3] = x;
    }
    else if(x > a[4]){
      a[5] = a[4];
      a[4] = x;
    }
    else if(x > a[5]){
      a[5] = x;
    }
  }
  for(int i = 0; i < k; i++) {
    printf("%d ", a[i]);
  }
  return 0;
}
