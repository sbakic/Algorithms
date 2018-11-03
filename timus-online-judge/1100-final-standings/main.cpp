#include <stdio.h>

class Team{
    public:
        long ID;
        int M;
};

Team array[150001],tempArray[150001];

void partition(Team array[],long left,long middle,long right){

    long j,mid,low;

    low=left;
    j=left;
    mid=middle+1;

    while((low<=middle)&&(mid<=right)){
        if(array[low].M>=array[mid].M){
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

void merge(Team array[],long left,long right){
    if(left<right){
        long middle=(left+right)/2;
        merge(array,left,middle);
        merge(array,middle+1,right);

        partition(array,left,middle,right);
    }
}

int main(){
    long n;
    scanf("%ld",&n);

    for(int i=0;i<n;i++){
        scanf("%ld %d",&array[i].ID,&array[i].M);
    }
    merge(array,0,n-1);

    for(int i=0;i<n;i++){
        printf("%ld %d\n",array[i].ID,array[i].M);
    }

    return 0;
}
