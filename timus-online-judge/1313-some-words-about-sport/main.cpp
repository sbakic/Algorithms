#include <stdio.h>

int main(){
    int i,j,n,z=1,pixels[101][101];
    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&pixels[i][j]);
        }
    }

    for(int k=0;k<n;k++){
        for(i=k,j=0;i>=0;i--,j++){
            printf("%d ",pixels[i][j]);
        }
    }

    for(int k=0;k<n;k++,z++){
        for(i=n-1,j=z; i>=z;i--,j++){
            printf("%d ",pixels[i][j]);
        }
    }

    return 0;
}
