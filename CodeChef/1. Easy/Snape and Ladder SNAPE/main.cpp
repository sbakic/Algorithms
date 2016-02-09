#include <stdio.h>
#include <math.h>

int main(){
    int t,b,ls;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d %d",&b,&ls);
        printf("%f %f\n",sqrt(pow(ls,2)-pow(b,2)),sqrt(pow(b,2)+pow(ls,2)));
    }

    return 0;
}
