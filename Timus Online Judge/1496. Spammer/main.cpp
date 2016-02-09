#include <stdio.h>
#include <string.h>

class Spammers{
public:
    char name[31];
    int count=0;
};

int main(){
    Spammers spammers[101];
    int n,count;
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        gets(spammers[i].name);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(spammers[i].count!=-1 && !strcmp(spammers[i].name,spammers[j].name)){
                spammers[i].count++;
                spammers[j].count=-1;
            }
        }
    }

    for(int i=0;i<=n;i++){
        if(spammers[i].count>0){
            puts(spammers[i].name);
        }
    }

    return 0;
}
