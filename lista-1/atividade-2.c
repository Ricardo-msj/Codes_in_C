#include <stdio.h>

/*
2. Fazer um programa que recebe 3 valores inteiros do usuário e mostra 
o maior deles, o  menor deles, os valores pares e a média.
*/

int main()
{
    int num1,num2,num3,maior,menor;
    float media;

    printf("Digite o primeiro numero: ");
    scanf("%d",&num1);

    printf("Digite o segundo numero: ");
    scanf("%d",&num2);

    printf("Digite o terceiro numero: ");
    scanf("%d",&num3);

    maior = menor = num1;

    media = (num1+num2+num3)/3;
    

    if(num2 > maior)
        maior = num2;

    else if(num2 < menor)
        menor = num2;

    if(num3 > maior)
        maior = num3;

    else if(num3 < menor)
        menor = num3;

    if(num1%2 == 0)
        printf("\n%d eh par\n",num1);
    if(num2%2 == 0)
        printf("\n%d eh par\n",num2);
    if(num3%2 == 0)
        printf("\n%d eh par",num3);
    

    printf("\n\nO maior numero eh: %d",maior);
    printf("\nO menor numero eh: %d",menor);
    printf("\nA media entre eles eh: %.1f\n\n",media);


    return 0;
}
