#include <stdio.h>

int main(){
  int number;
  scanf("%d",&number);

  while(number!=42) {
    printf("%d\n",number);
    scanf("%d",&number);
  }

  return 0;
}


