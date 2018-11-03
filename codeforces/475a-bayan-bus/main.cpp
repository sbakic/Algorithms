#include <stdio.h>

void printSeats(int seat){
    if(seat==1){
        printf("O.");
    }
    else{
        printf("#.");
    }
}

int main(){
    int k,seats[35];
    scanf("%d",&k);

    for(int i=0;i<=k;i++){
        seats[i]=1;
    }
    printf("+------------------------+\n|");
    printSeats(seats[1]);
    printSeats(seats[5]);
    printSeats(seats[8]);
    printSeats(seats[11]);
    printSeats(seats[14]);
    printSeats(seats[17]);
    printSeats(seats[20]);
    printSeats(seats[23]);
    printSeats(seats[26]);
    printSeats(seats[29]);
    printSeats(seats[32]);
    printf("|D|)\n|");
    printSeats(seats[2]);
    printSeats(seats[6]);
    printSeats(seats[9]);
    printSeats(seats[12]);
    printSeats(seats[15]);
    printSeats(seats[18]);
    printSeats(seats[21]);
    printSeats(seats[24]);
    printSeats(seats[27]);
    printSeats(seats[30]);
    printSeats(seats[33]);
    printf("|.|\n|");
    printSeats(seats[3]);
    printf("......................|\n|");
    printSeats(seats[4]);
    printSeats(seats[7]);
    printSeats(seats[10]);
    printSeats(seats[13]);
    printSeats(seats[16]);
    printSeats(seats[19]);
    printSeats(seats[22]);
    printSeats(seats[25]);
    printSeats(seats[28]);
    printSeats(seats[31]);
    printSeats(seats[34]);
    printf("|.|)\n");
    printf("+------------------------+");

    return 0;
}
