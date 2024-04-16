#include <stdio.h>
#include <stdlib.h>

/*
6. Implemente a função maiores, que recebe como parâmetro um vetor de números inteiros (vet) de
tamanho n e um valor x. A função deve retornar quantos números maiores do que x existem nesse
vetor. Essa função deve obedecer ao protótipo:
int maiores(int n, int * vet, int x);
*/

int maiores(int n, int * vet, int x)
{

    int count = 0;

    for(int i=0; i <= n-1; i++){

        if(vet[i] > x){
            count++;
        }
    }
    return count;

}

int main()
{
    int n, x;

    printf("\nDigite x: ");
    scanf("%d", &x);

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int vet[n];
    for(int i=0; i <= n-1; i++){
        
        printf("Digite o [%d]: ", i+1);
        scanf("%d", &vet[i]);
    }

    int resposta = maiores(n, vet, x);

    printf("\nExistem %d numeros maiores que %d.", resposta, x);

    return 0;
}
