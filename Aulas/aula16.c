#include <stdio.h>
#include "stdlib.h"
#include "time.h"

int main(){
    int idade;

    printf("Digite a sua idade: ");
    scanf("%i", &idade);
    if(idade >= 18 && idade <= 67)
    {
        printf("Voce pode doar sangue! ");
    }
    else
    {
        printf("Voce nao pode doar sangue !");
    }
}