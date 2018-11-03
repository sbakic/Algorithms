#include <stdio.h>

bool binary_function(long array[4001], int k, int N) {
    int s;
    int dg = 0;
    int gg = N-1;
    while (gg >= dg) {
        s = dg+ ((gg - dg) / 2);
       	if (array[s] > k){
			gg = s-1;
       	}
       	else if (array[s] < k){
                dg= s+1;
        }
       	else return true;
		}
    return false;
}


int main(){
    int n,m,p;
    long eigenvalue,firstPlayer[4001],firstTwoPlayers[4001],totalJointEigenvalue[4001];

    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%ld",&firstPlayer[i]);
    }

    int z=0;
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%ld",&eigenvalue);
        if(binary_function(firstPlayer,eigenvalue,n)){
            firstTwoPlayers[z]=eigenvalue;
            z++;
        }
    }

    int k=0;
    scanf("%d",&p);
    for(int i=0;i<p;i++){
        scanf("%ld",&eigenvalue);
         if(binary_function(firstTwoPlayers,eigenvalue,z)){
            totalJointEigenvalue[k]=eigenvalue;
            k++;
        }
    }

    printf("%d",k);

    return 0;
}
