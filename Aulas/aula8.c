#include "stdio.h"


void main(){
    int numero_prestacao;
    int total_prestacao_pagas;
    int valor_da_prestacao;
    int saldo_devedor;
    int restante_de_prestacao;
    printf("Digite o numero total de prestacoes de um consorcio, o total de prestacao pagas e o valor da prestacao!");
    scanf("%i %i %i", &numero_prestacao, &total_prestacao_pagas, &valor_da_prestacao);
    restante_de_prestacao = numero_prestacao - total_prestacao_pagas; 
    saldo_devedor = (numero_prestacao - total_prestacao_pagas) * valor_da_prestacao;


    printf("O saldo devedor eh de: R$%i e restam %i prestacoes!", saldo_devedor, restante_de_prestacao);



}