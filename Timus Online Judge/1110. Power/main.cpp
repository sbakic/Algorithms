#include <stdio.h>

long power(int x,int n,int m){
    long result=x;
    if(n==0) return 1%m;
    for(int i=2;i<=n;i++){
        result=(result*x)%m;
    }

    return result%m;
}

int main(){
    int n,m,y,counter=0;
    scanf("%d %d %d",&n,&m,&y);

    for(int i=0;i<m;i++){
        if(power(i,n,m)%m==y){
            printf("%d ",i);
            counter++;
        }
    }

    if(counter==0){
        printf("-1");
    }

    return 0;
}
