#include <stdio.h>

int main(){
    long n,m,a;
    scanf("%ld%ld%ld",&n,&m,&a);

    n%a==0?n/=a:n=n/a+1;
    m%a==0?m/=a:m=m/a+1;

    printf("%I64d",(long long)n*(long long)m);

    return 0;
}
