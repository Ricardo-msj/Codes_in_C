#include <stdio.h>
#include <stdlib.h>

/*
10. O maior divisor comum (MDC) de dois números inteiros é o maior número 
inteiro que faz uma divisão exata (com resto zero) desses dois números. 
Por exemplo, o MDC de  32 e 40 é 8, o MDC de 9 e 27 é 9 e o MDC de 13 e 25 é 1. 
Implemente uma função que  receba como parâmetros dois números inteiros x e y e 
calcule o MDC desses números.  Essa função deve ter o seguinte protótipo: 
int mdc (int x, int y); 
*/

int mdc(int x,int y)
{
    int resultado = 1;
    int menor = (x<y)?x:y;

    for(int i=1; i <= menor; i++)
    {
        if(x % i == 0 && y % i == 0 )
        {
            resultado = i;
        }
    }

    return resultado;
}

int main(void)
{
    int x,y;

    printf("Digite x e y: ");
    scanf("%d %d",&x,&y);

    int resu = mdc(x,y);

    printf("\nResultado: %d\n\n",resu);

    return 0;
}
