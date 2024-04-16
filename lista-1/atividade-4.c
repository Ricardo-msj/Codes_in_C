#include <stdio.h>

/*4. Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um 
professor e indicar: a média, se está aprovado/reprovado e se tem direito de realizar a VS. 
Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os 
resultados solicitados. */

int calcular_media(int a,int b,int c){
    int resu;

    resu = (a+b+c)/3;
    return resu;
}

int main()
{
    int num1,num2,num3,media;

    printf("Nota1: ");
    scanf("%d",&num1);
    if(num1 < 0 || num1 > 10){
        printf("Valor invalido!!!");
        return 1;
    }

    printf("Nota2: ");
    scanf("%d",&num2);
    if(num2 < 0 || num2 > 10){
        printf("Valor invalido!!!");
        return 1;
    }

    printf("Nota3: ");
    scanf("%d",&num3);
    if(num3 < 0 || num3 > 10){
        printf("Valor invalido!!!");
        return 1;
    }

    media = calcular_media(num1,num2,num3);

    if(media >= 6){
        printf("\n\nSua media foi %d esta APROVADO\n",media);
    }
    else if(media >= 4 && media <6){
        printf("\n\nSua media foi %d esta de VS\n",media);
    }
    else{
        printf("\n\nSua media foi %d esta REPROVADO\n",media);
    }

    return 0;
}
