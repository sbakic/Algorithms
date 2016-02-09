#include <stdio.h>

int main(){
    int z,n,i,j, counter=1, rooms[101][101];
    scanf("%d",&n);

    for(int k=0;k<n;k++){
        z=n-k-1;
        for(i=0;i<=k;i++,counter++,z++){
            rooms[i][z]=counter;
        }
    }

    for(int k=1,itr=1;k<n;k++,itr++){
        z=k;
        for(i=0;i<n-itr;i++,counter++,z++){
            rooms[z][i]=counter;
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",rooms[i][j]);
        }
        printf("\n");
    }
}

// Other solution without matrix
/*
#include <stdio.h>

int main(){
    int n,sumOfDifferenceInColumns=0,NumberInFirstRow,NumberInLastRow,differenceInColumns,differenceInRows,differenceInFirstRow,firstLeft,firstInRow,counter;
    scanf("%d",&n);

    for(int i=2; i<=n;i++){
        sumOfDifferenceInColumns+=i;
    }

    firstLeft=(n*n)-sumOfDifferenceInColumns;
    NumberInFirstRow=firstLeft;
    NumberInLastRow=n*n;
    differenceInFirstRow=n-1;

    for(int i=0,differenceInColumns=n;i<n;i++,differenceInColumns--){
        firstInRow=(n*n)-sumOfDifferenceInColumns;
        differenceInRows=differenceInColumns-1;
        for(int j=0,counter=1;j<n;j++){

            if(firstInRow==firstLeft){
                printf("%d ",NumberInFirstRow);
                NumberInFirstRow-=differenceInFirstRow;
                differenceInFirstRow--;
                continue;
            }

            if(firstInRow==n*n){
                printf("%d ",NumberInLastRow);
                NumberInLastRow-=j+1;
                continue;
            }

            if(firstInRow!=firstLeft && firstInRow!=n*n){
                printf("%d ",firstInRow);

                if(differenceInRows<n-1 && counter!=2){
                    differenceInRows++;
                    firstInRow-=differenceInRows;
                    continue;
                }

                if(counter==2){
                    differenceInRows--;
                    firstInRow-=differenceInRows;
                    continue;
                }

                if(differenceInRows==n-1){
                    if(counter!=2){
                        counter++;
                    }
                    firstInRow-=differenceInRows;
                    continue;
                }
            }
        }

        printf("\n");
        sumOfDifferenceInColumns-=differenceInColumns;
    }

    return 0;
}
*/
