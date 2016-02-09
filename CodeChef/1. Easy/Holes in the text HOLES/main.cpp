#include <stdio.h>
#include <string.h>

int main(){
    int t,count;
    char text[100];
    scanf("%d",&t);

    for(int i=0;i<t;i++){
        count=0;
        scanf("%s",&text);

        for(int j=0;j<strlen(text);j++){
            switch(text[j]){
                case 'A':case 'D':case 'O':case 'P':case 'Q':case 'R': count++; break;
                case 'B': count+=2; break;
                default: break;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}
