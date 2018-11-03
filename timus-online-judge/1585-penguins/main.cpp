#include <stdio.h>
#include <string.h>

int main(){
    int n,sumEmperor=0,sumLittle=0,sumMacaroni=0;
    char name[20];
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        gets(name);
        if(strcmp(name,"Emperor Penguin")==0){
            sumEmperor++;
        }
        else if(strcmp(name,"Little Penguin")==0){
            sumLittle++;
        }
        else if(strcmp(name,"Macaroni Penguin")==0){
            sumMacaroni++;
        }
    }

    if(sumEmperor>sumLittle && sumEmperor>sumMacaroni){
        printf("Emperor Penguin");
    }
    else if(sumLittle>sumEmperor && sumLittle>sumMacaroni){
        printf("Little Penguin");
    }
    else if(sumMacaroni>sumEmperor && sumMacaroni>sumLittle){
        printf("Macaroni Penguin");
    }

    return 0;
}
