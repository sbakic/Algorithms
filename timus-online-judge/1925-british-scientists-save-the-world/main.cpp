#include <stdio.h>

int main(){
    int n,k,b,g;
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d %d",&b,&g);
        k+=b-g;
    }

    k-2*(n+1)>0?printf("%d",k-2*(n+1)):printf("Big Bang!");

    return 0;
}
