#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void main(){

    float numero, numero2;
    printf("Digite um numero: ");
    scanf("%f", &numero);
    printf("Digite um segundo numero: ");
    scanf("%f", &numero2);
    if(numero > numero2)
    {
        printf("%f",numero);


    }
    if(numero2 > numero)
    {
        printf("%f",numero2);


    }

}
