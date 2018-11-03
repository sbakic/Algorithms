#include <stdio.h>

bool binary_function(long array[15000], int k, int N) {
    int middle;
    int left=0;
    int right=N-1;
    while(right>=left){
        middle=left+((right-left)/2);
       	if(array[middle]>k){
            right=middle-1;
       	}
        else if(array[middle]<k){
                left=middle+1;
            }
            else {
                return true;
            }
		}
    return false;
}

int main(){
    int n;
    long m, professorsDate[15001],studentsDate,count=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%ld",&professorsDate[i]);
    }
    scanf("%ld",&m);

    for(int i=0;i<m;i++){
        scanf("%ld",&studentsDate);
        if(binary_function(professorsDate,studentsDate,n)){
            count++;
        }
    }

    printf("%ld",count);

    return 0;
}
