#include <stdio.h>

int main(){
    int t;
    long t1,t2,t3,t4;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%ld %ld %ld %ld",&t1,&t2,&t3,&t4);
        printf("%lf\n",(double)t1/(double)(t1+t2));
    }

    return 0;
}

