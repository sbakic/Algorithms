#include <stdio.h>

int main(){
    int a=0,b=0,c,a1,b1,a2,b3;
    scanf("%d %d",&a1,&b1);

    scanf("%d %d",&a2,&c);
    b=a2-a1;

    scanf("%d %d",&c,&b3);
    a=b3-b1;

    printf("%d %d",a,b);

    return 0;
}
