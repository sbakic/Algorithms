#include <stdio.h>

int main(){
    int n;
    long pushs=0;
    scanf("%d",&n);

    for(int i=1;i<=n-1;i++){
        pushs+=(n-i)*i;
    }

    printf("%ld",pushs+n);

    return 0;
}
