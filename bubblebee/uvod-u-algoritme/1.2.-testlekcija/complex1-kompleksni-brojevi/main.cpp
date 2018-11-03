#include <stdio.h>

struct ComplexNumber{
    long real;
    long imaginary;

    void saberi(ComplexNumber a, ComplexNumber b){
        printf("%ld %ld\n",a.real+b.real, a.imaginary+b.imaginary);
    }

    void oduzmi(ComplexNumber a, ComplexNumber b){
        printf("%ld %ld\n",a.real-b.real, a.imaginary-b.imaginary);
    }

    void pomnozi(ComplexNumber a, ComplexNumber b){
        printf("%ld %ld\n",a.real*b.real-a.imaginary*b.imaginary, a.imaginary*b.real+a.real*b.imaginary);
    }

    void podeli(ComplexNumber a, ComplexNumber b){
        if((b.real*b.real+b.imaginary*b.imaginary)!=0){
            printf("%ld %ld\n",(a.real*b.real+a.imaginary*b.imaginary)/(b.real*b.real+b.imaginary*b.imaginary), (a.imaginary*b.real-a.real*b.imaginary)/(b.real*b.real+b.imaginary*b.imaginary));
        }
    }
};

int main(){
    long real1,imaginary1,real2,imaginary2;

    scanf("%ld%ld",&real1,&imaginary1);
    ComplexNumber a={real1,imaginary1};

    scanf("%ld%ld",&real2,&imaginary2);
    ComplexNumber b={real2,imaginary2};

    ComplexNumber c;
    c.saberi(a,b);
    c.oduzmi(a,b);
    c.pomnozi(a,b);
    c.podeli(a,b);

    return 0;
}
