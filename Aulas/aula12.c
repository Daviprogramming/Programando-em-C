//

// Calculadora de Soma Simples

//Objetivo: Praticar a leitura de números e a realização de operações matemáticas.

//Tarefa: Escreva um programa que peça ao usuário para digitar dois números inteiros, calcule a soma deles e mostre o resultado.

//Exemplo de Saída:

#include "stdio.h"

int main(){

    int numero_1, numero_2 ;
    printf("Digite o primeiro numero: ");
    scanf("%i", &numero_1);
    printf("Digite o segundo numero: ");
    scanf("%i", &numero_2);
    int soma = numero_1 + numero_2;
    printf("A soma de %i e %i e: %i",numero_1 , numero_2, soma);



    return 0;
}