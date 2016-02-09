#include <stdio.h>

int main(){
    //The number of the stripes.
    int n;
    long long a=1,b=1,c=0;
    scanf("%d",&n);
    //Fibonacci Numbers
    for(int i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }

    printf("%lld",2*b);
    return 0;
}
