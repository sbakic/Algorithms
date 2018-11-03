#include <stdio.h>
#include <stdlib.h>

bool checkEight(long a){
  a=abs(a);
  while(a){
    if(a%10==8){
      return true;
    }
    a/=10;
  }
  return false;
}

int main() {
  long a,i=1;
  scanf("%ld", &a);

  while(!checkEight(++a))i++;
  printf("%ld",i);

  return 0;
}
