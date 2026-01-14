#include "stdio.h"
#include "math.h"

void main(){
    float primeiro_numero;
    float segundo_numero;
    printf("Digite o primeiro numero: ");
    scanf("%f", &primeiro_numero);
    printf("Digite o segundo numero: ");
    scanf("%f", &segundo_numero);

    float seno_primeiro_numero = sin(primeiro_numero);
    float raiz_primeiro_numero = sqrt(seno_primeiro_numero);
    printf("a raiz do seno de %f eh :%f\n", primeiro_numero, raiz_primeiro_numero);
    float cos_primeiro_numero = cos(primeiro_numero);
    float segundo_numero_elevado = pow(segundo_numero,cos_primeiro_numero);
    printf("o %f elevado ao cos de %f eh %f", segundo_numero, cos_primeiro_numero, segundo_numero_elevado);



}