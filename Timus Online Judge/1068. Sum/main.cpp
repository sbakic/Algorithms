#include <stdio.h>

int main(){
    int n;
    long sum=1;
    scanf("%d",&n);

    while(n!=1){
        sum+=n;
        if(n>1){
            n--;
        }
        else if(n<1){
            n++;
        }
    }

    printf("%ld",sum);
    return 0;
}
