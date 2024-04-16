#include <stdio.h>
//
//1. Fazer um programa para receber um número inteiro de segundos do usuário e 
//imprimir  a quantidade correspondente em horas, minutos e segundos. 
//

int main()
{
    int num=0,horas=0,segs=0,mins=0;

    printf("Digite os segundos: ");
    scanf("%d", &num);

    horas = num / 3600;
    num %= 3600;
    mins = num/60;
    segs = mins/60;

    printf("\n\n%d:%d:%d\n\n",horas,mins,segs);


    return 0;
}
