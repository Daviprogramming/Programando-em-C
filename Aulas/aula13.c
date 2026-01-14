#include "stdio.h"


int main(){
    int numero_inteiro;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero_inteiro);
    int antecessor, sucessor;

    antecessor = numero_inteiro - 1;
    sucessor = numero_inteiro + 1; 
    printf("O antecessor de %i eh %i e o sucessor eh %i.",numero_inteiro, antecessor, sucessor);



    return 0;
}



