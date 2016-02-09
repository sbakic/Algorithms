#include <stdio.h>

int main(){
    int cost=0,a;

    for(;(a=getchar())!='\n'; (a==' ')? cost++: (a%3==0)? cost+=3 : cost+=a%3);
    printf("%i",cost );

    return 0;
}
