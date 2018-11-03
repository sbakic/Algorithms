#include <stdio.h>

int main(){
    int n,k,kX,min,max,count=0,minI,maxI,cubes[101],cubesX[101];

    scanf("%d %d",&n,&k);
    kX=k;

    for(int i=0;i<n;i++){
        scanf("%d",&cubes[i]);
        cubesX[i]=cubes[i];
    }

    for(int j=0;j<k;j++){
        min=10001;
        max=0;
        for(int i=0;i<n;i++){
            if(cubes[i]<min){
                min=cubes[i];
                minI=i;
            }

            if(cubes[i]>max){
                max=cubes[i];
                maxI=i;
            }
        }
        if(max==min) continue;
        cubes[maxI]--;
        cubes[minI]++;
        count++;
    }

    min=10001;
    max=0;

    for(int i=0;i<n;i++){
        if(cubes[i]<min){
            min=cubes[i];
        }

        if(cubes[i]>max){
            max=cubes[i];
        }
    }

    printf("%d %d\n",max-min,count);

    count=0;
    for(int j=0;j<k;j++){
        min=10001;
        max=0;
        for(int i=0;i<n;i++){
            if(cubesX[i]<min){
                min=cubesX[i];
                minI=i;
            }

            if(cubesX[i]>max){
                max=cubesX[i];
                maxI=i;
            }
        }

        if(max==min) continue;

        count++;
        cubesX[maxI]--;
        cubesX[minI]++;
        printf("%d %d\n",maxI+1,minI+1);
    }

    return 0;
}
