#include <stdio.h>
#include <stdlib.h>

/*
2. Seja o seguinte trecho de programa: 
int i=3,j=5; 
int *p, *q; 
p = &i; 
q = &j; 
Qual é o valor das seguintes expressões ? 
a) p == &i; b) *p - *q c) **&p d) 3* - *p/(*q)+7 

*/


int main(void)
{
    int i = 3;
    int j = 5;

    int *p, *q;

    p = &i;
    q = &j;

    int a = p == &i;
    int b = *p - *q;
    int c = **&p;
    int d = 3* - *p/(*q)+7;

    printf("\nPrimeira expressao: p == &i\n");
    printf("Resu: %d\n", a);

    printf("\nSegunda expressao: *p - *q\n");
    printf("Resu: %d\n",b);

    printf("\nTerceira expressao: **&p\n");
    printf("Resu: %d\n",c);

    printf("\nQuarta expressao: 3* - *p/(*q)+7\n");
    printf("Resu: %d\n",d);

    return 0;
}
