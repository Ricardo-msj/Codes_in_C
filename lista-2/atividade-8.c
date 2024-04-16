/*
8. O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55
 = 3025. Fazer  um programa para obter todos os números de 4 algarismos 
 com a mesma característica do  número 3025. 
*/

#include <stdio.h>
#include <stdlib.h>


int numero(int num)
{
    int fist,second;

    fist = num / 100;
    second = num % 100;

    int soma = fist + second;
    int prod = soma * soma;

    if(prod == num)
    {
        return prod;
    }
    
    return -1;
}

int main()
{
    for(int i = 1000; i <= 9999; i++)
    {
        int resultado = numero(i);

        if(resultado != -1)
        {
        printf("\n%d",resultado);
        }
    }
    return 0;
}
