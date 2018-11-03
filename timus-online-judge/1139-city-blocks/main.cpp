#include <stdio.h>

int main(){
    int n,m,k,min;
    scanf("%d %d",&n,&m);

    min=(n-1<=m-1)?n-1:m-1;
    for(int i=1;i<=min;i++){
        if((n-1)%i==0 && (m-1)%i==0){
            k=i;
        }
    }

    printf("%d",m+n-k-2);

    return 0;
}
