#include <stdio.h>
#include <math.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    float a,b,c;
    long n,count=0;
    scanf("%ld",&n);

    for(int i=0;i<n;i++){
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        a=pow(x1-x2,2)+pow(y1-y2,2);
        b=pow(x1-x3,2)+pow(y1-y3,2);
        c=pow(x2-x3,2)+pow(y2-y3,2);

        if(a+b==c || a+c==b || b+c==a){
            count++;
        }
    }

    printf("%ld",count);

    return 0;
}
