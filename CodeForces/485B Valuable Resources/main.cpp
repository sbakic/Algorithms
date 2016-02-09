#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <algorithm>

using namespace std;

int main(){
    int n;
    long x,y,max1=LONG_MIN, min1=LONG_MAX, max2=LONG_MIN, min2=LONG_MAX;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%ld %ld",&x,&y);
        max1=max(x,max1);
        min1=min(x,min1);
        max2=max(y,max2);
        min2=min(y,min2);
    }

    (max1-min1)>(max2-min2)? printf("%I64d",(long long)pow((long long)max1-min1,2)): printf("%I64d",(long long)pow((long long)max2-min2,2));

    return 0;
}
