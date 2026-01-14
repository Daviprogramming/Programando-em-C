#include "stdio.h"


void main(){

    int a[6] = {1,0,5,-2,-5,7};
    int soma = a[0] + a[1]  + a[5];
    printf("%i\n", soma);
    a[3] = 100;
    int soma_quadrado = a[2] * a[2] + a[4] * a[4];
    printf("%i\n", soma_quadrado);
    printf("%i\n", a[0]);
    printf("%i\n", a[1]);
    printf("%i\n", a[2]);
    printf("%i\n", a[3]);
    printf("%i\n", a[4]);
    printf("%i\n", a[5]);



}