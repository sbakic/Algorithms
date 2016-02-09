#include <stdio.h>

int main(){
    int k,n,numberOfCars,remainingCars=0;
    scanf("%d %d",&k,&n);
    for(int i=0;i<n;i++){
        scanf("%d",&numberOfCars);
        remainingCars+=numberOfCars-k;
        if(remainingCars<0){
            remainingCars=0;
        }
    }

    printf("%d",remainingCars);

    return 0;
}
