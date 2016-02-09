#include <stdio.h>

int town[1001][1001], SATtown[1001][1001];

// Summed Area Table
void SAT(int town[][1001], int SATtown[][1001],int n,int m){
    for(int i=0;i<m;i++){
        SATtown[0][i]=town[0][i];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            SATtown[i][j]=town[i][j]+SATtown[i-1][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            SATtown[i][j]+=SATtown[i][j-1];
        }
    }
}

int main(){
    int n,m,width,height;
    long q,Li,Lj,sum;
    scanf("%d %d",&n,&m);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&town[i][j]);
        }
    }

    SAT(town,SATtown,n,m);

    scanf("%ld",&q);
    for(int i=0;i<q;i++){
        scanf("%ld %ld %d %d",&Lj,&Li,&width,&height);
        sum=0;

        if(Lj==0){
            for(int j=Li;j<Li+height;j++){
                sum+=town[j][0];
            }
            printf("%ld\n",sum+SATtown[Li-1+height][Lj-1+width]-SATtown[Li-1+height][Lj]-SATtown[Li-1][Lj-1+width]+SATtown[Li-1][Lj]);
        }
        else if(Li==0){
            for(int j=Lj;j<Lj+width;j++){
                sum+=town[0][j];
            }
            printf("%ld\n",sum+SATtown[Li-1+height][Lj-1+width]-SATtown[Li-1+height][Lj-1]-SATtown[Li][Lj-1+width]+SATtown[Li][Lj-1]);
        }
        else if(Li==0 && Lj==0){
            for(int j=1;j<height;j++){
                sum+=town[j][0];
            }
            for(int j=1;j<width;j++){
                sum+=town[0][j];
            }
            printf("%ld",town[0][0]+sum+SATtown[Li-1+height][Lj-1+width]-SATtown[Li-1+height][Lj]-SATtown[Li][Lj-1+width]+SATtown[Li][Lj]);
        }
        else{
            printf("%ld\n",SATtown[Li-1+height][Lj-1+width]-SATtown[Li-1+height][Lj-1]-SATtown[Li-1][Lj-1+width]+SATtown[Li-1][Lj-1]);
        }
    }

    return 0;
}
