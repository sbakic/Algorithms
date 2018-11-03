#include <iostream>

using namespace std;

void changeMatrixA(int i,int j,int m,int n,int matrixA[][101]){
    for(int x=0;x<n;x++){
        matrixA[i][x]=0;
    }

    for(int x=0;x<n;x++){
        matrixA[x][j]=0;
    }
}

int sumOfElements(int i,int j,int m,int n,int matrixA[][101]){
    int sum=0;

    for(int x=0;x<n;x++){
        sum+=matrixA[i][x];
    }

    for(int x=0;x<m;x++){
        sum+=matrixA[x][j];
    }

    return sum;
}

bool compareMatrixs(int m,int n,int matrixA[][101],int matrixB[][101]){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(matrixB[i][j]==1 && sumOfElements(i,j,m,n,matrixA)==0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int i,j,n,m,matrixA[101][101],matrixB[101][101];
    cin>>m>>n;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>matrixB[i][j];
            matrixA[i][j]=1;
        }
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(matrixB[i][j]==0){
                changeMatrixA(i,j,m,n,matrixA);
            }
        }
    }

    if(compareMatrixs(m,n,matrixA,matrixB)){
        cout<<"YES"<<endl;

        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
               cout<<matrixA[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"NO";
    }


    return 0;
}
