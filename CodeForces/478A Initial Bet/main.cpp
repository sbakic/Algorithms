#include <stdio.h>

int main(){
    int c1,c2,c3,c4,c5;
    scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);

    ((c1+c2+c3+c4+c5)%5==0 && (c1+c2+c3+c4+c5)!=0)?printf("%d",(c1+c2+c3+c4+c5)/5):printf("-1");

    return 0;
}
