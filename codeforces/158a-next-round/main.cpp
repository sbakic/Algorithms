#include <stdio.h>

int main(){
    int n,k,count=0,scores[51];
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%d",&scores[i]);
    }

    for(int i=0;i<n;i++){
        if(scores[i]>=scores[k-1] && scores[i]>0){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
