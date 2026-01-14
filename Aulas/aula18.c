#include "stdio.h"



int main(){
    int numero;
    printf("Digite um numero:");
    scanf("%i", &numero);


    for(int i = 0; i <= numero; i++)
    {
        if(i % 2 != 0)
        printf("%i\n", i);
    }

    return 0;
}