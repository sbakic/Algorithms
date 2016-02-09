#include <stdio.h>

void partition(long array[],int left,int middle,int right){
    int j,mid,low;
    long tempArray[101];

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

void merge(long array[],int left,int right){
    if(left<right){
        int middle=(left+right)/2;
        merge(array,left,middle);
        merge(array,middle+1,right);

        partition(array,left,middle,right);
    }
}

int main(){
    int t,n,k;
    long array[101];
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        scanf("%d",&n);
        for(int j=0;j<n;j++){
            scanf("%ld",&array[j]);
        }
        scanf("%d",&k);
        long element=array[k-1];

        merge(array,0,n-1);

        for(int j=0;j<n;j++){
            if(array[j]==element){
                printf("%d\n",++j);
                break;
            }
        }
    }

    return 0;
}
