#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){
    string word;
    char vowels[]="AEIOUYaeiouy";
    cin >> word;

    for(int i=0;i<strlen(vowels);i++){
        word.erase(remove(word.begin(), word.end(), vowels[i]), word.end());
    }

    for(int i=0;word[i]!='\0';i++) {
        if(i%2==0){
            word.insert(i, 1, '.');
        }
        word[i] = tolower(word[i]);
    }

    cout<<word;

    return 0;
}
