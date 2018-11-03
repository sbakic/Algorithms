#include <stdio.h>

int main(){
    int t;
    long p,max=2;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int counter=0;
        scanf("%ld",&p);

        while(p>0){
            while(max<=p && max<=2048){
                max*=2;
            }
            p-=(max/2);
            max=2;
            counter++;
        }
        printf("%d\n",counter);
    }

    return 0;
}
/*#include <stdio.h>

int main(){
    int t;
    long p;
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        int counter=0,max=2048;
        scanf("%ld",&p);

        while(p>0){
            counter+=p/max;
            p%=max;
            max/=2;
        }
        printf("%d\n",counter);
    }

    return 0;
}
*/
