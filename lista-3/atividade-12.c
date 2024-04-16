#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
12. Fazer um programa para receber uma frase do usuário, caracter a caracter usando getch() e
armazenando no vetor (máx. 80 caracteres). Quando o usuário digita enter (‘\r’) a recepção é
finalizada. Mostrar cada palavra da frase em uma linha separada
*/

#define MAX 80

int main()
{
    char frase[MAX];
    int indice = 0;

    printf("Digite '\r' para terminar\n");

    do
    {
        printf("\nDigite sua frase: ");
        frase[indice] = getch();
        printf("%c", frase[indice]);


        if(frase[indice] == '\r' || indice == MAX-1){
            frase[indice] = '\0';
            break;
        }

        indice++;

    } while (1);
    
    int i = 0;
    while (frase[i] != '\0')
    {
        printf("\n%c", frase[i]);

        i++;
    }
    
    return 0;
}
