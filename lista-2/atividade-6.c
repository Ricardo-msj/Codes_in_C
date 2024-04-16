#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*6. Fazer um programa que sorteie um número de 0 a 100 e 
que permita que o usuário  (sem conhecer o número sorteado) tente acertar. 
Caso não acerte, o programa deve  imprimir uma mensagem informando se o número
sorteado é maior ou menor que a  tentativa feita. Ao acertar o número, o programa 
deve imprimir a quantidade de tentativas  feitas. */


int sorteio_num()
{
    srand(time(NULL));
    int num = rand() %100;

    return num;
}


int main()
{

int valor=0,numero_sort,count=0;
numero_sort = sorteio_num();

while (valor != numero_sort)
{
    printf("\nDigite: ");
    scanf("%d",&valor);
    count++;

    if(numero_sort == valor)
    {
        printf("\nParabens vc acertou!!!\n");
        printf("Vc precisou de %d tentativas",count-1);
    }
    else
    {
        if(numero_sort > valor){

            printf("O numero que vc digitou eh menor que o sorteado!! <%d>",numero_sort);
        }
        else if(numero_sort < valor)
        {
            printf("O numero que vc digitou eh maior que o sorteado!! <%d>",numero_sort);
        }
    }

}
    return 0;
}
