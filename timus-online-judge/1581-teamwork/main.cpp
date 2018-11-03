#include <stdio.h>

int main(){
    int n, array[1001],br=1;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    for(int i=0;i<n;i++){
        if(array[i]==array[i+1]){
            br++;
        }
        else if(array[i]!=array[i+1]){
            printf("%d %d ",br,array[i]);
            br=1;
        }
    }

    return 0;
}
