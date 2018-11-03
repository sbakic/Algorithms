#include <stdio.h>

int main(){
    long long l,r;
    scanf("%I64d %I64d",&l,&r);

    if(r-l+1<3){
	 	printf("-1");
	 	return 0;
	}
    else if(l%2==0){
	 	printf("%I64d %I64d %I64d",l,l+1,l+2);
	 	return 0;
	}
	else if(r-l+1>3){
	 	printf("%I64d %I64d %I64d",l+1,l+2,l+3);
        return 0;
	}
    else {
        printf("-1");
    }

    return 0;
}
