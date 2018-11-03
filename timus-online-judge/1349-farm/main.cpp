#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    switch(n){
      case 1: printf("1 2 3"); break;
      case 2: printf("3 4 5"); break;
      default: printf("-1");
    }

    return 0;
}
