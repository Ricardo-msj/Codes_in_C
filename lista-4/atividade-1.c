#include <stdio.h>
#include <stdlib.h>

/*
. Escreva um programa em C para ler um vetor X de 10 elementos inteiros. Logo após copie os
elementos do vetor X para um vetor Y fazendo com que o 1o. elemento de X seja copiado para o
10o. de Y, o 2o. de X para o 9o. de Y e assim sucessivamente. Após o término da cópia, imprimir o
vetor Y.
*/


int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    int y[10] = {};

    for(int i = 0; i < 10; i++)
    {
        y[9-i] = x[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf(" Y[%d]: %d", i, y[i]);
    }

    return 0;
}
