#include <stdio.h>

int main(){
    int t1,t2,rejectedRuns,sum=0;
    scanf("%d %d",&t1,&t2);

    for(int i=0;i<10;i++){
        scanf("%d",&rejectedRuns);
        sum+=rejectedRuns*20;
    }

    t1>t2-sum?printf("Dirty debug :("):printf("No chance.");

    return 0;
}
