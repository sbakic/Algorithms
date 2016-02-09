#include <stdio.h>

int main(){
    long t,n;
    scanf("%ld",&t);

    for(int k=0;k<t;k++){
        scanf("%ld",&n);

        printf("%lld\n",(long long)n+((long long)n*(long long)(n+1)/2));
    }

    return 0;
}
