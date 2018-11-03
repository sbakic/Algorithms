#include <stdio.h>
#include<stdlib.h>

int main(){
    char string1[256],string2[256];
    fgets (string1, 256, stdin);
    fgets (string2, 256, stdin);
    int a,b;
    a = atoi (string1);
    b = atoi (string2);

    for(int i=0,j=1;i<9999;i+=2,j+=2){
        if(a==i){
            printf("yes");
            return 0;
        }
        if(b==j){
            printf("yes");
            return 0;
        }
    }

    printf("no");
    return 0;
}
