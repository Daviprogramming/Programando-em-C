#include "stdio.h"
void main(){

int soma = 0;
 int qtd_valores = 0;
 int sair = 0;
 
 do {
     int num;
     printf ("\nDigite um valor inteiro: ");
     scanf ("%i", &num);
     getchar();
     if (num != 0 && num % 2 == 0) {
         soma += num;
         qtd_valores++;}
     if (num == 0) {
         sair = 1;}
 } while (sair == 0);
 
 
 float media = (float) soma / qtd_valores;  // casting: fazer um tipo ser outro tipo
 
 printf("\n\nA media dos valores digitados = %.2f", media);
}