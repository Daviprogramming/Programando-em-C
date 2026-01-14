#include "stdio.h"

void main(){
    float F;
    printf("Digite a temperatura em Farenheit: ");
    scanf("%f", &F);
    float C;
    C = (F -32) * 5 / 9;

    printf("A temperatura em graus celcius eh: %f", C);

}