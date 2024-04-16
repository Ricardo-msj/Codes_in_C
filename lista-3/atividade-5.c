#include <stdio.h>
#include <stdlib.h>

/*
5. Implemente a função max_vet, que recebe como parâmetro um vetor de números de ponto
flutuante (vet) de tamanho n e retorna o maior número armazenado nesse vetor. Essa função deve
obedecer o protótipo: float max_vet (int n, float * vet);
Faça também a função main.
*/

float max_vet (int n, float *vet)
{
    int i;
    int tpm = vet[0];

    for(i = 1; i <= n-1; i++){
        if(vet[i] > tpm){
            tpm = vet[i];
        }
    }
    return tpm;
}

int main()
{
    int n;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    float vet[n];

    for(int i = 0; i <= n-1; i++)
    {
        printf("\nDigite o %d numero: ", i + 1);
        scanf("%f", &vet[i]);
    }

    float maior = max_vet(n, vet);

    printf("\n\nO maior numero eh: %.1f", maior);

    return 0;
}
