#include <stdio.h>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a, &b,&c,&d);

    while(a<=c){
        a+=b;
        if(a>c){
            a=c;
        }
        c-=d;
    }

    printf("%d",a);

    return 0;
}
