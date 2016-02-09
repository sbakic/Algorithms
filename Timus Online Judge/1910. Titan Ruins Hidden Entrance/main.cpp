#include <stdio.h>

int main(){
    int n,maxIndex=0;
    long max=0,temp=0,forces[1001];

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%ld",&forces[i]);
    }

    for(int i=0;i+3<=n;i++){
        temp=forces[i]+forces[i+1]+forces[i+2];
        if(temp>max){
            max=temp;
            maxIndex=i+2;
        }
    }

    printf("%ld %d",max,maxIndex);

    return 0;
}
