#include <stdio.h>

int main(){
    int n,k;
    scanf("%d",&n);

    k=(n+1)/2;
    if(k%2!=0){
        printf("grimy");
    }
    else {
        printf("black");
    }

    return 0;
}
