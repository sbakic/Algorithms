#include <stdio.h>

int main(){
    int t;
    long n;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%ld",&n);
        printf("%ld\n",n/2+1);
    }

    return 0;
}
