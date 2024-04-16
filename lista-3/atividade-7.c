#include <stdio.h>
#include <stdlib.h>

/*
7. Seja a seguinte sequência de instruções em um programa C:
int *pti;
int veti[]={10,7,2,6,3};
pti = veti;
Qual afirmativa é falsa?
a. *pti é igual a 10
b. *(pti+2) é igual a 2
c. pti[4] é igual a 3
d. pti[1] é igual a 10
e. *(veti+3) é igual a 6
*/

int main()
{
    int *pti;
    int veti[] = {10,7,2,6,3};
    pti = veti;

    /*A afirmativa falsa eh a "d", pois a contagem 
    se inicia do 0 logo o 1 nao seria o 10 e sim o 7 
    */
    return 0;
}
