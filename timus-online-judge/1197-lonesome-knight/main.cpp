#include <stdio.h>

int chessboard[8][8]={2,3,4,4,4,4,3,2,
                      3,4,6,6,6,6,4,3,
                      4,6,8,8,8,8,6,4,
                      4,6,8,8,8,8,6,4,
                      4,6,8,8,8,8,6,4,
                      4,6,8,8,8,8,6,4,
                      3,4,6,6,6,6,4,3,
                      2,3,4,4,4,4,3,2};

int main(){
    int n;
    scanf("%d\n",&n);

    for(int i=0;i<n;i++){
        char letter,digit;
        scanf("%c%c\n",&letter,&digit);
        int il,id;
        il=letter-'a'+1;
        id=digit-'0';
        printf("%d\n",chessboard[il-1][id-1]);
    }

    return 0;
}
