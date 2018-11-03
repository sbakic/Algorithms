#include <stdio.h>

int main(){
    long a,m,count=0;
    scanf("%ld %ld",&a,&m);

    if(a%m==0){
        printf("Yes");
        return 0;
    }

    while(count<17){
        if(a%m==0){
            printf("Yes");
            return 0;
        }
         a=a+a%m;
         count++;
    }

    printf("No");

    return 0;
}

