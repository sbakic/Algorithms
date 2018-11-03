#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);

    if((m*n)%2==0){
        printf("[:=[first]");
    }
    else {
        printf("[second]=:]");
    }

    return 0;
}
