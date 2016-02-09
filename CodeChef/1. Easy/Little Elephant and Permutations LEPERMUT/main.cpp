#include <stdio.h>

void isGoodPermutation(int array[101],int n){
    int i,j,numberOfInversions=0,numberOfLocalInversions=0;

    for(i=0;i<n-1;i++){
        for(j=i+1;j<n
        ;j++){
            if(array[i]>array[j]){
                numberOfInversions++;
            }
        }
    }

    for(i=0;i<n-1;i++){
        if(array[i]>array[i+1]){
            numberOfLocalInversions++;
        }
    }

    (numberOfInversions==numberOfLocalInversions)?printf("YES\n"):printf("NO\n");
}

int main(){
    int t,n,array[101];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++){
           scanf("%d",&array[j]);
        }
        isGoodPermutation(array,n);
    }

    return 0;
}
