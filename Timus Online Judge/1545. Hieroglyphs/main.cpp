#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    char hieroglyphs[1001][3],letter;
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        gets(hieroglyphs [i]);
    }
    scanf("%c",&letter);

    for(int i=0;i<=n;i++){
        if(hieroglyphs[i][0]==letter){
            puts(hieroglyphs[i]);
        }
    }

    return 0;
}

