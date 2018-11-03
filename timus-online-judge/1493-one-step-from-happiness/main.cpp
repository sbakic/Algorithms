#include <stdio.h>

int main(){
    long n,digit,sumFirst=0,sumLast1=0,sumLast2=0,numberRight1=0,numberRight2=0,number[6];
    scanf("%ld",&n);

    for(int i=0;i<6;i++){
        digit=n%10;
        number[5-i]=digit;
        n/=10;
    }

    sumFirst=number[0]+number[1]+number[2];
    numberRight1=number[3]*100+number[4]*10+number[5]+1;
    numberRight2=number[3]*100+number[4]*10+number[5]-1;

    for(int i=0;i<3;i++){
        digit=numberRight1%10;
        sumLast1+=digit;
        numberRight1/=10;
    }

    for(int i=0;i<3;i++){
        digit=numberRight2%10;
        sumLast2+=digit;
        numberRight2/=10;
    }

    if(sumFirst==sumLast1 || sumFirst==sumLast2){
        printf("Yes");
    }
    else {
        printf("No");
    }

    return 0;
}
