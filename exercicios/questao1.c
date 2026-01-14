#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"
void main(){
    srand(time(NULL));
    int tamanho = 10;
    int tamanho2 = 0;
    int i_vetor2 = 0;
    int vetor1[tamanho];
    for(int i = 0; i < 10; i++){
        vetor1[i] = rand() % 51;
        printf("%i/", vetor1[i]);
        if(vetor1[i] % 2 != 0){
            tamanho2++;
        }
    }
    int vetor2[tamanho2];
    printf("\n");
    for(int i = 0; i < 10; i++){
        if(vetor1[i] % 2 != 0){
            vetor2[i_vetor2] = vetor1[i]; 
            printf("%i/", vetor2[i_vetor2]);
            i_vetor2++;
        }
    }    


}