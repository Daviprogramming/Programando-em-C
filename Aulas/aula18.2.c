#include "stdio.h"


int main(){
    char letra;
    printf("Digite uma letra do alfabeto");
    scanf("%c",&letra);

    for(char i = letra; i <= 'z'; i++ )
    {
        printf("%c", i);
    }
    return 0;
}