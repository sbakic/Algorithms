#include <stdio.h>
#include <string.h>

int main(){
    int h,w,n,pages=1,lenghtOfWords=0,numbersOfLines=1;
    char word[101];
    scanf("%d %d %d",&h,&w,&n);

    for(int i=0;i<n;i++){
        scanf("%s\n",&word);

        lenghtOfWords+=strlen(word);
        if(lenghtOfWords>w){
            lenghtOfWords=strlen(word);
            numbersOfLines++;
        }
        lenghtOfWords++;

        if(numbersOfLines>h){
            pages++;
            numbersOfLines=1;
        }
    }

    printf("%d",pages);

    return 0;
}
