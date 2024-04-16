#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char gerador_letra()
{
    srand(time(NULL));

    int num_random = rand() %26;
    char letra = 'a' + num_random;

    return letra;
}

int main()
{    
   char valor, letra;
     
    printf("Digite: ");
    scanf("%c",&valor);

    letra = gerador_letra();

    if(valor > letra)
    {
        printf("A letra %c eh maior que a letra %c",valor, letra);
    }
    else if(valor == letra)
    {
        printf("Voce acertou a letra era %c", letra);
    }
    else if(valor < letra)
    {
        printf("A letra %c eh menor que a letra %c",valor, letra);
    }
    return 0;
}
