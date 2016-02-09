#include <stdio.h>

int main() {
  int n, a, b;
  scanf("%d", &n);
  a = b = n / 2;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j < a || j > b) printf("*");
      else printf("D");
    }
    if(i < n / 2) {
      a--;
      b++;
    }
    else if (i >= n / 2){
      a++;
      b--;
    }
    printf("\n");
  }
  return 0;
}
