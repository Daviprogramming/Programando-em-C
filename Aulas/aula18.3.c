#include "stdio.h"


int main(){
    int alunos;
    float nota, soma, media;
    soma = 0;

    printf("Digite a quantidade de alunos: ");
    scanf("%i", &alunos);

    for(int i = 1; i <= alunos; i++)
    {
        
        printf("Digite a nota do aluno (%i): ",i);
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / alunos;
    printf("O valor da media eh : %f", media);
}