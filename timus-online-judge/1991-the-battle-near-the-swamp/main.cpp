#include <stdio.h>

int main(){
    int n,k;
    long a,unusedBoomBooms=0,survivedDroids=0;
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++){
        scanf("%ld",&a);
        if(k>a){
            survivedDroids+=k-a;
        }
        else if(k<a){
            unusedBoomBooms+=a-k;
        }
    }

    printf("%ld %ld",unusedBoomBooms,survivedDroids);

    return 0;
}
