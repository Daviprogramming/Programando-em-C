#include "stdio.h"


void main(){

    int vetor1[10];
    int vetor2[10];
    int vetor3[20];
    int c1 = 0;
    int c2 = 0;
    for(int i = 0; i < 10; i++){

        printf("Digite o valor do vetor[%i]: ", i);
        scanf("%i", &vetor1[i]);
    }
    for(int i = 0; i < 10; i++){

        printf("Digite o valor do vetor[%i]: ", i);
        scanf("%i", &vetor2[i]);
    }
    for(int i = 0; i < 20; i++){

        if(i % 2 == 0){
            vetor3[i] = vetor1[c1];
            c1++;
        }
        if(i % 2 != 0){
            vetor3[i] = vetor2[c2];
            c2++;
        }
    }
    printf("%i\n", vetor3[0]);
    printf("%i\n", vetor3[1]);
    printf("%i\n", vetor3[2]);
    printf("%i\n", vetor3[3]);

}