#include <stdio.h>

/*1. Faça um programa que verifique se um determinado número é primo. O número a ser  
testado deve ser fornecido pelo usuário do programa. O programa deve imprimir a  mensagem
 “NUMERO PRIMO” caso o número seja primo, e “NUMERO NAO PRIMO”  caso contrário. */


int main()
{
    int num,count=0;

    printf("Digite o numero: ");
    scanf("%d",&num);

    for(int i = 1; i <= num; i++){
        int divisao = num % i;
        if(divisao == 0)
        {
            count ++;
        }
    }
    if(count == 2){
        printf("Ele e primo");
    }
    else{
        printf("Ele n e primo");
    }

    return 0;
}
