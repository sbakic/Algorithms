#include <stdio.h>

int max(int a,int b){
    int c;
    a>=b?c=a:c=b;
    return c;
}

int main(){
    int a,b,c,value1,value2,value3,value4,value5,value6;
    scanf("%d %d %d",&a,&b,&c);

    value1=a+b*c;
    value2=a*(b+c);
    value3=a*b*c;
    value4=(a+b)*c;
    value5=a+b+c;
    value6=a*b+c;

    printf("%d",max(max(value5,value6),max(max(value1,value2),max(value3,value4))));

    return 0;
}
