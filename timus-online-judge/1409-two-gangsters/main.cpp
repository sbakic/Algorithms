#include <stdio.h>

int main(){
    //The number of cans shot by Harry and by Larry respectively.
    int harry, larry;
    scanf("%d %d",&harry,&larry);
    //The number of cans that were not shot by Harry and the number of cans that were not shot by Larry, respectively.
    printf("%d %d",larry-1,harry-1);
    return 0;
}
