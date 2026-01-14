#include "stdio.h"



void main(){

    int numero;
    printf("Digite um numero: ");
    scanf("%i", &numero);
    int conta_divisores = 0;
    for(int i = 0; i <= numero; i++ )
    {
        if(i % 3 == 0 && i % 7 == 0)
        {
            conta_divisores++;
            if(conta_divisores <= 5)
            {
            printf("\n%i", i);
            }
            else
            {
                break;
            }
        }
    }


}