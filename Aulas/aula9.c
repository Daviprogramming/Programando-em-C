#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"


void main(){
    int a;
    int b;
    int c;
    srand(time(NULL));
    a = 1 + rand() % 20;
    b = 1 + rand() % 20;
    c = 1 + rand() % 20;
    int delta = sqrt(pow(b,2)- 4 * a * c);
    int baskhara = (-b + delta) / 2 * a;
    printf("O resultado dos numeros %i, %i e %i eh : %i",a,b,c,baskhara);


}