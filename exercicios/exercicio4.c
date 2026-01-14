#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void main(){

    srand(time(NULL));
    int vezes;
    printf("digite quantas vezes deseja girar o dado: ");
    scanf("%i", &vezes);



    for(int i = vezes; i >= 1; i--)
    {
        int d1, d2;
        d1 = 1 + rand() % 6;
        d2 = 1 + rand() % 6;
        if(d1 == d2)
        {
            printf("d1 = %i e d2 = %i, logo %i > %i", d1, d2, d1, d2);
            printf("d1 = %i e d2 = %i, logo %i > %i", d1, d2, d2, d1);
        }

        else if(d1 > d2)
        {
            printf("d1 = %i e d2 = %i, logo %i > %i", d1, d2, d1, d2);
        }
        else
        {
            printf("d1 = %i e d2 = %i, logo %i < %i", d1, d2, d1, d2);
        }

    }


}
