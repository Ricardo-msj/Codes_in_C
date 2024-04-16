#include <stdio.h>
#include <string.h>


/*3. Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois 
números reais. O programa deve retornar o resultado da operação recebida sobre estes 
dois números.*/

int main()
{
    int num1,num2,valor;
    char simbolo;


    printf("Fist num: ");
    scanf("%d",&num1);
    getchar();

    printf("Second num: ");
    scanf("%d",&num2);
    getchar();

    printf("\nOpration: ");
    scanf("%c",&simbolo);
    getchar();

    switch (simbolo)
    {
    case '+':
        valor = num1 + num2;
        break;

    case '-':
        valor = num1-num2;
        break;

    case '*':
        valor = num1*num2;
        break;

    case '/':
        if(num2 != 0)
            valor = num1/num2;
        else {
            printf("Nao eh possivel dividir por ZERO!!");
            return 1; }

        break;

    default:
        printf("Simbolo invalido!!!");
        return 1;
    }

    printf("\n\nResposta: %d\n",valor);

    return 0;
}
