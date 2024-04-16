#include <stdio.h>

/*2. Faça um programa que calcule e imprima a soma dos n primeiros números naturais  
ímpares. O usuário do programa deve fornecer quantos números devem ser somados. */

int main()
{
    int num,resu=0;
    int soma = 1,count=0;
    


    printf("Digite o numero: ");
    scanf("%d",&num);

    while(count < num)
    {      
        resu += soma;
        soma += 2;
        count++;
    }
    printf("%d",resu);

    return 0;
}
