#include <stdio.h>

int main(){
    int n,wheels[151],setsOfWheels[151],size,numberOfWheels,cars=0,notFound;
    scanf("%d",&n);

    for(int i=0;i<151;i++){
        setsOfWheels[i]=0;
        wheels[i]=0;
    }

    for(int i=0;i<n;i++){
        scanf("%d",&size);
        if(wheels[0]==0){
            wheels[0]=size;
            numberOfWheels=1;
            setsOfWheels[0]=1;
            continue;
        }
        notFound=0;

        for(int j=0;j<numberOfWheels;j++){
            if(size==wheels[j]){
                setsOfWheels[j]++;
            }
            else {
                notFound++;
            }
        }
        if(notFound==numberOfWheels){
            wheels[numberOfWheels]=size;
            setsOfWheels[numberOfWheels]++;
            numberOfWheels++;
        }
    }

    for(int i=0;i<numberOfWheels;i++){
        cars+=setsOfWheels[i]/4;
    }

    printf("%d",cars);

    return 0;
}
/* ..second way..

#include <stdio.h>

main(){
    int n,size,wheels[701],cars=0;
    scanf("%d",&n);

    for(int i=0;i<701;i++){
        wheels[i]=0;
    }

    for(int i=0;i<n;i++){
        scanf("%d",&size);
        wheels[size]++;
    }

    for(int i=700;i>=600;i--){
        cars+=wheels[i]/4;
    }
    printf("%d",cars);

    return 0;
}

*/
