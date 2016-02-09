#include <stdio.h>

int main(){
    int character,number=0;

    for(;(character=getchar())!='\n';number=(number*10+character-'0'));
    printf("%u\n",number%7);

    return 0;
}
