#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "math.h"

void main(void){
    srand(time(NULL));
    int n1 = 50 + rand() % 151;
    int par_ou_impar;
    par_ou_impar = n1 % 2 == 0;
    printf("O numero %i e um numero: %i",n1,par_ou_impar);
}