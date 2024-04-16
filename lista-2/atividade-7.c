#include <stdio.h>

/*
7. Escreva um programa que calcule o salário semanal de um trabalhador. 
As entradas  são o número de horas trabalhadas na semana e o valor da hora. 
Até 40 h/semana não se  acrescenta nenhum adicional. Acima de 40h e até 60h 
há um bônus de 50% para essas  horas. Acima de 60h há um bônus de 100% para essas horas.
*/

int main()
{
    int salario, horas, valor;

    printf("Horas Trabalhadas: ");
    scanf("%d",&horas);
    printf("Valor da hora: ");
    scanf("%d",&valor);

    salario = horas*valor;

    if(horas <= 40)
    {
        printf("Seu salario eh: %d",salario);
    } 
    else if(horas > 40 && horas <= 60)
    {
        printf("Seu salario eh: %.2f",salario*1.5);
    }
    else if(horas > 60)
    {
        printf("Seu salario eh: %d",salario*2);
    }
    return 0;
}
