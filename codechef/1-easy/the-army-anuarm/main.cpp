#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    int t,minI,maxI,n,m,index;
    scanf("%d",&t);

    for(int k=0;k<t;k++){
        scanf("%ld %ld",&n,&m);

        minI=100000;
        maxI=-1;

        for(int j=0;j<m;j++){
            scanf("%ld",&index);

            maxI = max(maxI, index);
			minI = min(minI, index);
        }

        for(int i=0;i<n;i++){
            printf("%lld ",(long long)max(abs(maxI-i), abs(i-minI)));
        }
        printf("\n");

    }

    return 0;
}
