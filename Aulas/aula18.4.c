#include "stdio.h"


int main(){


    int N, X;
    printf("Digite o limite de intervalos: ");
    scanf("%i", &N);
    getchar();

    printf("\n Digite o numero de pares permitidos");
    scanf("%i", &X);

    int conta_pares = 0;
    for(int i = 0; i <= N; i++)
    {
        if(i % 2 == 0)
        {
            conta_pares++;
        }
        if(conta_pares > X)
        {
            break;
        }
        else
        {
            printf("%i", i);
        }
    }


}