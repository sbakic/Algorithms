#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){
    long red,blue,green;
    scanf("%ld %ld %ld",&red,&green,&blue);

    if(red<=green) swap(red,green);
    if(red<=blue) swap(red,blue);
    if(green<=blue) swap(green,blue);

    ((long long)red+(long long)green+(long long)blue)/3>((long long)green+(long long)blue)?printf("%I64d",(long long)green+(long long)blue):printf("%I64d",((long long)red+(long long)green+(long long)blue)/3);

    return 0;
}
