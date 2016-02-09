#include <stdio.h>

void swap(long *a,long *b){
    long temp=*a;
    *a=*b;
    *b=temp;
}

void SelectionSort(long array[5001],long array2[5001],long n){
    for(int j=0;j<n;j++){
        int max=j;
        for(int i=j;i<n;i++){
            if(array[i]<array[max]){
                max=i;
            }
        }
        swap(&array[j],&array[max]);
        swap(&array2[j],&array2[max]);
    }
}

int main(){
    int n;
    long days=-1,examsMax[5001],examsMin[5001];
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%ld %ld",&examsMax[i],&examsMin[i]);
    }

    SelectionSort(examsMax,examsMin,n);

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(examsMax[i]==examsMax[j] && examsMin[i]>examsMin[j]){
                swap(&examsMin[i],&examsMin[j]);
            }
        }
    }

    for(int i=0;i<n;i++){
        if(days<=examsMin[i]){
            days=examsMin[i];
        }
        else{
            days=examsMax[i];
        }
    }

    printf("%ld",days);

    return 0;
}
