#include<stdio.h>

int main(){
	long T,N;
	scanf("%ld",&T);

	for(int i=0;i<T;i++){
        scanf("%ld",&N);
        (N%4)==1?printf("ALICE\n"):printf("BOB\n");
	}

    return 0;
}
