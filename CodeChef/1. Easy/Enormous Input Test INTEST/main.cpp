#include <stdio.h>

int main(){
    long t,n,k,count=0;
    scanf("%ld %ld",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%ld",&t);
        if(t%k==0){
            count++;
        }
    }

    printf("%ld",count);

    return 0;
}
