#include "stdio.h"


void main(){

    float numero, maior_numero, menor_numero;
    maior_numero = 0;
    menor_numero = 100000;
    for(int i = 1; i <= 10; i++ )
    {
        printf("Digite um numero: ");
        scanf("%f", &numero);
        if(numero >= maior_numero)
        {
            maior_numero = numero;
        }
        else if(numero <= menor_numero)
        {
            menor_numero = numero;
        }

        
    }
    printf("O maior numero eh: %f", maior_numero);
    printf("O menor numero eh: %f", menor_numero);


}