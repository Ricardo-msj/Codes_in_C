#include <stdio.h>

/*8. Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10, 
R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e 
determine o menor número de notas para se obter o montante fornecido. A função deve 
ter o seguinte protótipo:
int total_de_notas(int valor)*/

int total_de_notas(int valor)
{
    int resto;

    int notas_100 = valor /100;
    resto= valor % 100;

    int notas_50 = resto /50;
    resto = resto % 50;

    int notas_20 = resto /20;
    resto = resto % 20;

    int notas_10 = resto /10;
    resto = resto % 10;

    int notas_5 = resto /5;
    resto = resto % 5;

    int notas_2 = resto /2;
    resto = resto % 2;

    int notas_1 = resto;
    
    printf("Para o valor R$%d, o menor numero de notas eh:\n", valor);
    printf("%d notas de 100\n", notas_100);
    printf("%d notas de 50\n", notas_50);
    printf("%d notas de 20\n", notas_20);
    printf("%d notas de 10\n", notas_10);
    printf("%d notas de 5\n", notas_5);
    printf("%d notas de 2\n", notas_2);
    printf("%d notas de 1\n", notas_1);

}

int main()
{
    int num;

    printf("Digite o valor desejado: ");
    scanf("%d",&num);

    total_de_notas(num);

    return 0;
}
