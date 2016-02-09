#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    ((b-a+1)%2==1 && b%2==1)?printf("%d",(b-a+1)/2+1):printf("%d",(b-a+1)/2);

    return 0;
}
