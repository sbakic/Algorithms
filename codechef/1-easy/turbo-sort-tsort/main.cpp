#include <stdio.h>

long array[1000001],tempArray[1000001];

void partition(long array[],long left,long middle,long right){

    long j,mid,low;

    low=left;
    j=left;
    mid=middle+1;

    while((low<=middle)&&(mid<=right)){
        if(array[low]<=array[mid]){
            tempArray[j]=array[low];
            low++;
        }
        else{
            tempArray[j]=array[mid];
            mid++;
        }
        j++;
    }

    if(low>middle){
        for(int i=mid;i<=right;i++){
            tempArray[j]=array[i];
            j++;
        }
    }
    else{
         for(int i=low;i<=middle;i++){
             tempArray[j]=array[i];
             j++;
         }
    }

    for(int i=left;i<=right;i++){
         array[i]=tempArray[i];
    }
}

void merge(long array[],long left,long right){
    if(left<right){
        long middle=(left+right)/2;
        merge(array,left,middle);
        merge(array,middle+1,right);

        partition(array,left,middle,right);
    }
}

int main(){
    long t;
    scanf("%ld",&t);

    for(int i=0;i<t;i++){
        scanf("%ld",&array[i]);
    }
    merge(array,0,t-1);

    for(int i=0;i<t;i++){
        printf("%ld\n",array[i]);
    }

    return 0;
}
