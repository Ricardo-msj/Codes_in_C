#include <stdio.h>

/*3. Faça um programa que imprima os n primeiros termos da série de Fibonacci,  
lembrando que esta série é definida da seguinte forma: 
termo1 = 1 
termo2 = 1 
termon = termon−1 + termon−2 
O usuário do programa deve fornecer o número de termos, e estes devem ser 
impressos  separados por um espaço. Por exemplo, se o usuário pedir os 6 primeiros 
termos da série  de Fibonacci, o programa deve ter a seguinte saída: 
1 1 2 3 5 8 
1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
*/

int main()
{
    int num0=0, num1=1, num2=0, count=0;
    int quant;

    printf("Digite a Quantidade: ");
    scanf("%d",&quant);

    while(count < quant)
    {
        num2 = num1;

        num1 = num0;

        num0 = num1 + num2;

        printf("%d ",num0);

        count++;
    }

    return 0;
}
