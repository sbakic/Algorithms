#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int main(){
    int n;
    string word;
    scanf("%d",&n);
    for(int i=0;i<n;++i){

        cin>>word;

        if(word.size()>10){
            printf("%c%d%c\n",word[0],word.size()-2,word[word.size()-1]);
        }
        else{
            printf("%s\n",word.c_str());
        }
    }

    return 0;
}
