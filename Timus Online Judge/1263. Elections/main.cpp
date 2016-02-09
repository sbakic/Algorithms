#include <stdio.h>

int main(){
    int n,m,a,votes[10001];
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){
        votes[i]=0;
    }

    for(int i=0;i<m;i++){
        scanf("%d",&a);
        for(int j=0;j<n;j++){
            if((a-1)==j){
                votes[j]++;
                break;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%.2f%%\n",((double)votes[i]/m)*100);
    }

    return 0;
}
