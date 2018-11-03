#include <stdio.h>
#include <math.h>

int main(){
    int n;
    long k;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%ld",&k);

        if(k==1) {
            printf("1 ");
            continue;
        }

        double a;
        double N=k;
        a=int(sqrt(double(9.0-4.0*(4.0-2.0*N)))+0.0000001);
        if(a*a==9.0-4.0*(4.0-2.0*N)) {
            printf("1 ");
        }
        else {
            printf("0 ");
        }
    }
    return 0;
}
/*  S=1;
    for(int i=1;S<k;i++){
        S+=i;
`   }
*/
