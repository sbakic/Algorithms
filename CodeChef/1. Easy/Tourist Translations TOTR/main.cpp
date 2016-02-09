#include <stdio.h>
#include <string.h>
#include <ctype.h>

void translate(char sentence[101],char English[27],char Bytelandian [27]){
    int i,j,z;
    for(i=0;i<strlen(sentence);i++){
        if(sentence[i]=='_'){
            sentence[i]=' ';
        }
        for(j=0;j<strlen(English);j++){
            if (sentence[i]>='A' && sentence[i]<='Z'){
                sentence[i]=tolower(sentence[i]);

                for(int z=0;z<strlen(English);z++){
                    if(sentence[i]==Bytelandian[z]){
                    sentence[i]=toupper(English[z]);
                    break;
                    }
                }
                break;
            } else if (sentence[i]>='a' && sentence[i]<='z') {
                if(sentence[i]==Bytelandian[j]){
                sentence[i]=English[j];
                break;
                }
            }
        }
    }
    puts(sentence);
}

int main(){
    int t;
    char sentence[101],English[27],Bytelandian [27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    scanf("%d",&t);
    scanf("%s",English);

    for(int i=0;i<=t;i++){
        gets(sentence);
        translate(sentence,English,Bytelandian);
    }

    return 0;
}
