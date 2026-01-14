#include "stdio.h"
#include "math.h"
#include "stdlib.h"
#include "time.h"


void main(){
    int a;
    int b;
    int c;
    a = 3;
    b = 2;
    c = -8;
    int delta = sqrt(pow(b,2)- 4 * a * c);
    int baskhara = (-b + delta) / 2 * a;
    printf("O resultado dos numeros %i, %i e %i eh : %i",a,b,c,baskhara);


}