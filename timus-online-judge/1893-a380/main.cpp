#include <stdio.h>

int main(){
    char letter;
    int number;
    scanf("%d %c",&number,&letter);

    if(number>=1 && number<=2){
        switch(letter){
            case 'A': case 'D': printf("window"); break;
            case 'B': case 'C': printf("aisle"); break;
            default: printf("neither"); break;
        }
    }
    else if(number>=3 && number<=20){
        switch(letter){
            case 'A': case 'F': printf("window"); break;
            case 'B': case 'C': case 'D': case 'E': printf("aisle"); break;
            default: printf("neither"); break;
        }
    }
    else if(number>=21 && number<=65){
         switch(letter){
            case 'A': case 'K': printf("window"); break;
            case 'C': case 'D': case 'G': case 'H': printf("aisle"); break;
            default: printf("neither"); break;
        }
    }

    return 0;
}
