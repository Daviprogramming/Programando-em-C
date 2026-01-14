#include "stdio.h"
#include "string.h"

void main(){
    char palavra_segredo[30];
    printf("Digite a palavra segredo:");
    scanf("%s", palavra_segredo);
    getchar();
    system("cls");
    int tamanho = strlen(palavra_segredo);
    int tentativas = 8;
    char underline = '_';
    char caracter;
    char forca[tamanho + 1];
    for(int i = 0; i < tamanho; i++ ){
        forca[i] = underline;
    }

    while(strcmp(forca, palavra_segredo) != 0 && tentativas != 0){
        for(int i = 0; i < tamanho; i++){
            printf("%c", forca[i]);
        }
        forca[tamanho] = '\0';
        printf("\nVoce tem %i tentativas", tentativas);
        printf("\nDigite um caracter:\n");
        scanf("%c", &caracter);
        getchar();
        system("cls");
        int acertou = 0;
        for(int i = 0; i < tamanho; i++ ){
            if(caracter == palavra_segredo[i]){
                if(forca[i] == underline){
                forca[i] = caracter;
                acertou = 1;
                }
                else{
                    acertou = 1;
                }
            }
        }
        if(acertou == 0){
        tentativas--;
        }
    }
    if(strcmp(forca, palavra_segredo) == 0){
    printf("Parabens voce ganhou o jogo da forca !\n A palavra era: %s", palavra_segredo);
    }
    if(tentativas == 0){
        printf("Voce perdeu o jogo! tente novamente.");
    }
}