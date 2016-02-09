#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    double stack[128*1024];
    long long n;
    int index=0;

    while(cin >> n){
        stack[index++]=(double)sqrt(n);
    }
    index--;

    while(index>=0){
        printf("%.4f\n",stack[index--]);
    }

  return 0;
}
