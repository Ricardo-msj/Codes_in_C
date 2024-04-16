#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
5. Escreva um programa em C para ler um valor X e um valor Z 
(se Z for menor que X  deve ser lido um novo valor para Z). 
Contar quantos números inteiros devemos somar em  sequência (a partir do X inclusive) 
para que a soma ultrapasse a Z o mínimo possível.  Escrever o valor final da contagem. 
Exemplo: 
X Z Resposta 
3 20 5 (3+4+5+6+7=25) 
2 10 4 (2+3+4+5=14) 
30 40 2 (30+31=61) 
*/

int main(void)
{
    int x,z,soma=0;
    int count = 0;
    char var[100] = "";

    do
    {
        printf("Digite x e z, z deve ser maior  que x\n");
        printf("\nX: ");
        scanf("%d",&x);

        printf("Z: ");
        scanf("%d",&z);

    } while (x>z);

    for(int i = x; i < z; i++)
    {
        if(i == x){
            sprintf(var,"%d",i);
        }
        else{
            sprintf(var + strlen(var), "+%d",i);
        }

        count ++;
        soma += i;

        if(soma > z){
            break;
        }
    }

    printf("\nx: %d, z: %d",x,z);
    printf("\nSoma(%s) = %d",var,soma);
    printf("\nNumero de vezes: %d\n\n",count);

    return 0;
}
