#include <stdio.h>
#include <math.h>

int main(){
    int t;
    long P,S;
    float base;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%ld %ld",&P,&S);

        base=(P-(float)sqrt((float)(P*P-4*6*S)))/(2*6);
		printf("%.2f\n",base*(S/2-P*base/4+base*base));

    }

    return 0;
}
