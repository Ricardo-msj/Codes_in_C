#include <stdio.h>
#include <stdlib.h>

/*
5. Defina as variáveis a, b e c (tipo de dado) para obter todas as possíveis 
respostas para  os valores de ‘c’:  
Suponha que: 
a = 3 
b = a / 2 
c = b + 3.1 
Valores possíveis para ‘c’? 
1. c = 4.6 
2. c = 4.1 
3. c = 4 

*/

int main(void)
{
    {
    float a = 3.0;
    float b = a / 2.0;
    double c = b + 3.1;

    printf("\n\nCaso 1: %.1f\n",c);
    }
    
    {
    float a = 3.0;
    int b = a / 2.0;
    double c = b + 3.1;

    printf("Caso 2: %.1f\n",c);
    }

    {
    int a = 3.0;
    int b = a / 2.0;
    int c = b + 3.1;

    printf("Caso 3: %d\n\n",c);
    }

    return 0;
}