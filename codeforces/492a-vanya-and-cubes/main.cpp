#include <stdio.h>

int main(){
    int n,sum=0,i=0;
    scanf("%d",&n);

    while(sum<=n){
        sum+=(++i*(i+1))/2;
    }

    printf("%d",--i);
    return 0;
}
