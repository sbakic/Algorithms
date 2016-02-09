#include <stdio.h>

int main(){
    int t,n,a;
    long c,sum;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d %ld",&n,&c);
        sum=0;
        for(int j=0;j<n;j++){
            scanf("%d",&a);
            sum+=a;
        }
        if(sum<=c){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }


    return 0;
}
